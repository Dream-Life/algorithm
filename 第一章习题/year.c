#include<stdio.h>

int main(){
    // 判断是否是闰年
    int n;
    scanf("%d",&n);
    if(n%400>0)
        if(n%100>0 && n%4==0)
            printf("yes\n");
        else
            printf("no\n");
    else
        printf("yes\n");
    return 0;
}