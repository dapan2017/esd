// 客户机
// 实现连接类
//
#include <sys/sendfile.h>
#include <lib_acl.h>
#include "02_proto.h"
#include "03_util.h"
#include "01_conn.h"

// 构造函数
conn_c::conn_c(char const* destaddr, int ctimeout /* = 30 */,
    int rtimeout /* = 60 */): m_ctimeout(ctimeout),
    m_rtimeout(rtimeout), m_conn(NULL) {
    // 检查目的地址
    acl_assert(destaddr && *destaddr);
    // 复制目的地址
    m_destaddr = acl_mystrdup(destaddr);
}

// 析构函数
conn_c::~conn_c(void) {
    // 关闭连接
    close();
    // 释放目的地址
    acl_myfree(m_destaddr);
}

// 从跟踪服务器获取存储服务地址列表
int conn_c::saddrs(char const* appid, char const* userid,
    char const* fileid, std::string& saddrs) {
    // |包体长度|命令|状态|应用ID|用户ID|文件ID|
    // |    8   |  1 |  1 |  16  |  256 |  128|
    // 构造请求

    // 发送请求

    // 包体指针

    // 接收包体

    // 解析包体

        // |包体长度|命令|状态|组名|存储服务器地址列表|
        // |    8   |  1 |  1 |16+1|  包体长度-(16+1）|
    
        // |包体长度|命令|状态|错误号|错误描述|
        // |    8   |  1 |  2 |   2  | <=1024 |

    // 释放包体
}

// 从跟踪服务器获取组列表
int conn_c::groups(std::string& groups) {
}

// 向存储服务器上传文件
int conn_c::upload(char const* appid, char const* userid,
    char const* fileid, char const* filepath) {
}

// 向存储服务器上传文件
int conn_c::upload(char const* appid, char const* userid,
    char const* fileid, char const* filedata, long long filesize) {
}

// 向存储服务器询问文件大小
int conn_c::filesize(char const* appid, char const* userid,
    char const* fileid, long long* filesize) {
}

// 从存储服务器下载文件
int conn_c::download(char const* appid, char const* userid,
    char const* fileid, long long offset, long long size,
    char** filedata, long long* filesize) {
}

// 删除存储服务器上的文件
int conn_c::del(char const* appid, char const* userid,
    char const* fileid) {
}

// 获取错误号
short conn_c::errnumb(void) const {
    return m_errnumb;
}

// 获取错误描述
char const* conn_c::errdesc(void) const {
    return m_errdesc.c_str();
}

// 打开连接
bool conn_c::open(void) {
    if (m_conn)
        return true;

    // 创建连接对象
    m_conn = new acl::socket_stream;

    // 连接目的主机
    if (!m_conn->open(m_destaddr, m_ctimeout, m_rtimeout)) {
        logger_error("open %s fail: %s",
            m_destaddr, acl_last_serror());
        delete m_conn;
        m_conn = NULL;
        m_errnumb = -1;
        m_errdesc.format("open %s fail: %s",
            m_destaddr, acl_last_serror());
        return false;
    }

    return true;
}

// 关闭连接
void conn_c::close(void) {
    if (m_conn) {
        delete m_conn;
        m_conn = NULL;
    }
}

// 构造请求
int conn_c::makerequ(char command, char const* appid,
    char const* userid, char const* fileid, char* requ) {
    // |包体长度|命令|状态|应用ID|用户ID|文件ID|
    // |    8   |  1 |  1 |  16  |  256 |  128 |
    requ[BODYLEN_SIZE] = command; // 命令
    requ[BODYLEN_SIZE+COMMAND_SIZE] = 0; // 状态

    // 应用ID
    if (strlen(appid) >= APPID_SIZE) {
        logger_error("appid too big, %lu >= %d",
            strlen(appid), APPID_SIZE);
        m_errnumb = -1;
        m_errdesc.format("appid too big, %lu >= %d",
            strlen(appid), APPID_SIZE);
        return ERROR;
    }
    strcpy(requ + HEADLEN, appid);

    // 用户ID
    if (strlen(userid) >= USERID_SIZE) {
        logger_error("userid too big, %lu >= %d",
            strlen(userid), USERID_SIZE);
        m_errnumb = -1;
        m_errdesc.format("userid too big, %lu >= %d",
            strlen(userid), USERID_SIZE);
        return ERROR;
    }
    strcpy(requ + HEADLEN + APPID_SIZE, userid);

    // 文件ID
    if (strlen(fileid) >= FILEID_SIZE) {
        logger_error("fileid too big, %lu >= %d",
            strlen(fileid), FILEID_SIZE);
        m_errnumb = -1;
        m_errdesc.format("fileid too big, %lu >= %d",
            strlen(fileid), FILEID_SIZE);
        return ERROR;
    }
    strcpy(requ + HEADLEN + APPID_SIZE + USERID_SIZE, fileid);

    return OK;
}

// 接收包体
int conn_c::recvbody(char** body, long long* bodylen) {
    // 接收包头
    int result = recvhead(bodylen);

    // 既非本地错误亦非套接字通信错误其包体非空
    if (result != ERROR && result != SOCKET_ERROR && *bodylen) {
        // 分配包体
        if (!(*body = (char*)malloc(*bodylen))) {
            logger_error("call malloc fail: %s, bodylen: %lld",
                strerror(errno), *bodylen);
            m_errnumb = -1;
            m_errdesc.format("call malloc fail: %s, bodylen: %lld",
                strerror(errno), *bodylen);
            return ERROR;
        }

        // 接收包体
        if (m_conn->read(*body, *bodylen) < 0) {
            logger_error("read fail: %s, from: %s",
                acl::last_serror(), m_conn->get_peer());
            m_errnumb = -1;
            m_errdesc.format("read fail: %s, from: %s",
                acl::last_serror(), m_conn->get_peer());
            free(*body);
            *body = NULL;
            close();
            return SOCKET_ERROR;
        }
    }

    return result;
}

// 接收包头
int conn_c::recvhead(long long* bodylen) {
    if (!open())
        return SOCKET_ERROR;

    char head[HEADLEN]; // 包头缓冲区

    // 接收包头
    if (m_conn->read(head, HEADLEN) < 0) {
        logger_error("read fail: %s, from: %s",
            acl::last_serror(), m_conn->get_peer());
        m_errnumb = -1;
        m_errdesc.format("read fail: %s, from: %s",
            acl::last_serror(), m_conn->get_peer());
        close();
        return SOCKET_ERROR;
    }

    // |包体长度|命令|状态|
    // |    8   |  1 |  1 |
    // 解析包头
    if ((*bodylen = ntoll(head)) < 0) { // 包体长度
        logger_error("invalid body length: %lld < 0, from: %s",
            *bodylen, m_conn->get_peer());
        m_errnumb = -1;
        m_errdesc.format("invalid body length: %lld < 0, from: %s",
            *bodylen, m_conn->get_peer());
        return ERROR;
    }
    int command = head[BODYLEN_SIZE]; // 命令
    int status = head[BODYLEN_SIZE+COMMAND_SIZE]; // 状态
    if (status) {
        logger_error("response status %d != 0, from: %s",
            status, m_conn->get_peer());
        return STATUS_ERROR;
    }
    logger("bodylen: %lld, command: %d, status: %d",
        *bodylen, command, status);

    return OK;
}
