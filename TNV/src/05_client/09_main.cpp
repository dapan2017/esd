// 客户机
// 定义主函数
//
#include <unistd.h>
#include <lib_acl.h>
#include <lib_acl.hpp>
#include "01_types.h"
#include "07_client.h"

// 打印命令行用法
void usage(char const* cmd) {
    fprintf(stderr, "Groups  : %s <taddrs> groups\n", cmd);
    fprintf(stderr, "Upload  : %s <taddrs> upload   "
        "<appid> <userid> <filepath>\n", cmd);
    fprintf(stderr, "Filesize: %s <taddrs> filesize "
        "<appid> <userid> <fileid>\n", cmd);
    fprintf(stderr, "Download: %s <taddrs> download "
        "<appid> <userid> <fileid> <offset> <size>\n", cmd);
    fprintf(stderr, "Delete  : %s <taddrs> delete   "
        "<appid> <userid> <fileid>\n", cmd);
}

// 根据用户ID生成文件ID
std::string genfileid(char const* userid) {
    srand(time(NULL));

    struct timeval now;
    gettimeofday(&now, NULL);
}

int main(void) {
}
