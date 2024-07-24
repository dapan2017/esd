//写冲突演示
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc,char* argv[]){
    //打开文件
    int fd = open("./conflict.txt",
                O_WRONLY|O_CREAT|O_APPEND,0664);
    if(fd == -1){
        perror("open");
        return -1;
    }
    //写入数据
    // ./conf  hello
    for(int i = 0;i < strlen(argv[1]);i++){
        if(write(fd,&argv[1][i],sizeof(argv[1][i])) == -1){
            perror("write");
            return -1;
        }
        sleep(1);
    }
    //关闭文件
    close(fd);
    return 0;
}




