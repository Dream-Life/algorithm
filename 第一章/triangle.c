#include<stdio.h>

int main(){
    // 判断是否是直角三角形
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c)
        if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
            printf("yes\n");
        else
            printf("no\n");
    else
        printf("not a triangle\n");
    return 0;
}