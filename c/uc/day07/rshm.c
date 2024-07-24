//读取共享内存
#include<stdio.h>
#include<unistd.h>
#include<sys/shm.h>

int main(void){
    //合成键
    printf("%d进程:合成键\n",getpid());
    key_t key = ftok(".",123);
    if(key == -1){
        perror("ftok");
        return -1;
    }
    //获取共享内存
    printf("%d进程:获取共享内存\n",getpid());
    int shmid = shmget(key,0,0);
    if(shmid == -1){
        perror("shmget");
        return -1;
    }
    //加载共享内存
    printf("%d进程:加载共享内存\n",getpid());
    getchar();
    char* shmaddr = shmat(shmid,NULL,0);
    if(shmaddr == (void*)-1){
        perror("shmat");
        return -1;
    }
    //读取数据
    printf("%d进程:读取数据\n",getpid());
    getchar();
    printf("%s\n",shmaddr);
    //卸载共享内存
    printf("%d进程:卸载共享内存\n",getpid());
    getchar();
    if(shmdt(shmaddr) == -1){
        perror("shmdt");
        return -1;
    }
    printf("%d进程:大功告成\n",getpid());
    return 0;
}


