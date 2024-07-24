//读取消息队列
#include<stdio.h>
#include<unistd.h>
#include<sys/msg.h>
#include<errno.h>

int main(void){
    //合成键
    printf("%d进程:合成键\n",getpid());
    key_t key = ftok(".",100);
    if(key == -1){
        perror("ftok");
        return -1;
    }
    //获取消息队列
    printf("%d进程:获取消息队列\n",getpid());
    int msgid = msgget(key,0);
    if(msgid == -1){
        perror("msgget");
        return -1;
    }
    //接收消息
    printf("%d进程:接收消息\n",getpid());
    for(;;){
        struct {
            long type;//消息类型
            char data[64];//消息内容
        }buf = {};

        if(msgrcv(msgid,&buf,sizeof(buf.data)-1,1234,0) == -1){
            if(errno == EIDRM){
                printf("消息队列被销毁\n");
                break;
            }else{
                perror("msgrcv");
                return -1;
            }
        }
        printf("%ld:%s\n",buf.type,buf.data);
    }
    printf("%d进程:大功告成\n",getpid());
    return 0;
}

