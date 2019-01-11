#include<stdio.h>

int main(){
    int a,b,c,x=0,y=0;
    scanf("%d%d%d",&a,&b,&c);
    // "!","&&","||"优先级由高到低
    if(a>5 && b>3 || c>10)
        printf("%d && %d || %d true\n",a,b,c);
    if(c>10 || a>5 && b>3)
        printf("%d || %d && %d true\n",c,a,b); 
    if(a>5 && b>3 || !(c>10))
        printf("%d && %d || !%d true\n",a,b,c);       
    // else 是就近匹配if    
    if(a>5) if(b>3) x++; else y++;
    printf("x=%d y=%d\n",x,y);
    return 0;
}