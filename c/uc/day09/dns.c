//域名解析
#include<stdio.h>
#include<arpa/inet.h>
#include<netdb.h>

int main(int argc,char* argv[]){
    //./dns  www.baidu.com
    struct hostent* h = gethostbyname(argv[1]);
    if(h == NULL){
        perror("gethostbyname");
        return -1;
    }
    printf("主机官方名:\n");
    printf("%s\n",h->h_name);
    printf("主机别名表:\n");
    for(char** pp = h->h_aliases;*pp;pp++){
        printf("%s\n",*pp);
    }
    printf("IP地址表:\n");
    for(struct in_addr** pp = (struct in_addr**)h->h_addr_list;*pp;pp++){
        printf("%s\n",inet_ntoa(**pp));
    }
    return 0;
}




