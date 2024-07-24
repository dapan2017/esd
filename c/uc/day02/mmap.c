//内存映射的建立和解除
#include <stdio.h>
#include<sys/mman.h>
#include<string.h>
int main(void){
    //要块空间,建立映射
    char* start = mmap(NULL,8192,PROT_READ | PROT_WRITE,
                        MAP_PRIVATE | MAP_ANONYMOUS,0,0);
    if(start == MAP_FAILED){
        perror("mmap");
        return -1;
    }
    //通过虚拟地址,即可访问物理内存
    strcpy(start,"铁锅炖大鹅");
    printf("%s\n",start);
    //解除第一个页映射
    if(munmap(start,4096) == -1){
        perror("munmap");
        return -1;
    }
    //printf("%s\n",start);//段错误

    char* start2 = start + 4096;
    strcpy(start2,"猪肉炖粉条");
    printf("%s\n",start2);
    //解除第二个页映射
    if(munmap(start2,4096) == -1){
        perror("munmap");
        return -1;
    }
    //printf("%s\n",start2);//段错误
    return 0;
}
