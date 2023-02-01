#include <stdio.h>
#include <iostream>

int main(){
    int n=0 ,cnt=0;
    printf("请输入1000以内的正整数");
    scanf("%d",&n);
    if(n<=0) {                          //若输入负数，报错
        printf("输入错误");
        return 1;
    }
    while(n!=1){
        if(n%2==0) n=n/2;
        else n=(3*n+1)/2;
        cnt++;
    }
    printf("需要%d步",cnt);
    return 0;
}