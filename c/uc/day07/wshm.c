//向共享内存写入数据
#include<stdio.h>
#include<string.h>
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
    //创建共享内存
    printf("%d进程:创建共享内存\n",getpid());
    int shmid = shmget(key,4096,IPC_CREAT | IPC_EXCL | 0664);
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
    //写入数据
    printf("%d进程:写入数据\n",getpid());
    getchar();
    strcpy(shmaddr,"UC真好玩");
    //卸载共享内存
    printf("%d进程:卸载共享内存\n",getpid());
    getchar();
    if(shmdt(shmaddr) == -1){
        perror("shmdt");
        return -1;
    }
    //销毁共享内存
    printf("%d进程:销毁共享内存\n",getpid());
    getchar();
    if(shmctl(shmid,IPC_RMID,NULL) == -1){
        perror("shmctl");
        return -1;
    }
    printf("%d进程:大功告成\n",getpid());
    return 0;
}

