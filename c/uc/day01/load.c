//动态库的动态加载
#include <stdio.h>
#include <dlfcn.h>// dlopen, dlsym, dlclose

int main() {
    // 打开动态库
    void* handle = dlopen("./shared/libmath.so",RTLD_NOW);
    if(handle == NULL){
        fprintf(stderr,"dlopen:%s\n",dlerror());
        return -1;
    }
    // 获取库中函数的地址
    int (*add)(int,int) = dlsym(handle,"add");
    if(add == NULL){
        fprintf(stderr,"dlsym:%s\n",dlerror());
        return -1;
    }
    int (*sub)(int,int) = dlsym(handle,"sub");
    if(sub == NULL){
        fprintf(stderr,"dlsym:%s\n",dlerror());
        return -1;
    }
    void (*show)(int,char,int,int) = dlsym(handle,"show");
    if(show == NULL){
        fprintf(stderr,"dlsym:%s\n",dlerror());
        return -1;
    }
    // 调用函数
    int a = 123,b = 456;
    show(a,'+',b,add(a,b));
    show(a,'-',b,sub(a,b));
    // 关闭动态库
    dlclose(handle);
}

