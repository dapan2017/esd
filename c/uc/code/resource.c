//资源模块实现
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/syscall.h>
#include"resource.h"
#include"mime.h"

//搜索资源
int searchResource(const char* path){
    return access(path,R_OK);
}

//判断类型
int identifytype(const char* path,char* type){
    // /common/site_modules.css
    char* suffix = strrchr(path,'.');
    if(suffix == null){
        printf("%d.%ld > 无法获取拓展名\n",getpid(),syscall(sys_gettid));
        return -1;
    }
    for(int i = 0;i < sizeof(s_mime) / sizeof(s_mime[0]);i++){
        if(strcasecmp(suffix,s_mime[i].suffix) == 0){
            strcpy(type,s_mime[i].type);
            return 0;
        }
    }
    printf("%d.%ld > 未识别拓展类型\n",getpid(),syscall(sys_gettid));
    return -1;
}









