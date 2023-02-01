#include <iostream>
#include <stdio.h>

int main(){
    int n;
    int school,score;
    int a[n];                           //记录学校总分
    scanf("%d",&n);
    for(int i=0;i<n;i++) a[i]=0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&school,&score);
        a[school]+=score;
    }
    int winner=0,max=0;                 //最高总分学校id以及其总分
    for(int i=0; i<n; i++){
        if(a[i]>max){
            winner=i;
            max=a[i];
        }
    }
    printf("\n%d %d\n",winner,max);
    return 0;
}