//获取文件的元数据
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<unistd.h>
#include<sys/stat.h>
//hello.c --> stat() --> struct stat st --> st.st_mode 
//--> mtos() --> -rw-rw-r--

char* mtos(mode_t m){
    static char s[11];
    if(S_ISDIR(m)){
        strcpy(s,"d");
    }else
    if(S_ISLNK(m)){
        strcpy(s,"l");
    }else
    if(S_ISSOCK(m)){
        strcpy(s,"s");
    }else
    if(S_ISCHR(m)){
        strcpy(s,"c");
    }else
    if(S_ISBLK(m)){
        strcpy(s,"b");
    }else
    if(S_ISFIFO(m)){
        strcpy(s,"p");
    }else{
        strcpy(s,"-");
    }
    strcat(s,S_IRUSR & m ? "r" : "-");
    strcat(s,S_IWUSR & m ? "w" : "-");
    strcat(s,S_IXUSR & m ? "x" : "-");
    strcat(s,S_IRGRP & m ? "r" : "-");  
    strcat(s,S_IWGRP & m ? "w" : "-");
    strcat(s,S_IXGRP & m ? "x" : "-");
    strcat(s,S_IROTH & m ? "r" : "-");  
    strcat(s,S_IWOTH & m ? "w" : "-");    
    strcat(s,S_IXOTH & m ? "x" : "-");
    return s;
}
//时间转换
char* ttos(time_t t){
    static char time[20];
    struct tm* l = localtime(&t);
    sprintf(time,"%04d-%02d-%02d %02d:%02d:%02d",l->tm_year+1900,
        l->tm_mon+1,l->tm_mday,l->tm_hour,l->tm_min,l->tm_sec);
    return time;
}

int main(int argc, char* argv[]){
    // ./stat hello.c
    if(argc < 2){
        fprintf(stderr,"用法:./stat <文件名>\n");
        return -1;
    }

    struct stat st;//用来输出文件的元数据
    if(stat(argv[1],&st) == -1){
        perror("stat");
        return -1;
    }
    printf("        设备ID:%lu\n",st.st_dev);
    printf("       i节点号:%lu\n",st.st_ino);
    printf("     类型和权限:%s\n",mtos(st.st_mode));
    printf("       硬链接数:%lu\n",st.st_nlink);
    printf("        用户ID:%u\n",st.st_uid);
    printf("          组ID:%u\n",st.st_gid);
    printf("       文件大小:%ld\n",st.st_size);
    printf("     特殊设备ID:%lu\n",st.st_rdev);
    printf("     IO块字节数:%ld\n",st.st_blksize);
    printf("       存储块数:%ld\n",st.st_blocks);
    printf("    最后访问时间:%s\n",ttos(st.st_atime));
    printf("    最后修改时间:%s\n",ttos(st.st_mtime));
    printf("    最后改变时间:%s\n",ttos(st.st_ctime));
   
    return 0;
}


