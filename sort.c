#include<stdio.h>

int main(){
        // 输入250，输出025
        /*
    int n;
    scanf("%d",&n);
    printf("%d%d%d\n",n%10,n/10%10,n/100);
    */

    // 输入250，输出25
    /*
    int n,m;
    scanf("%d",&n);
    m = (n%10)*100 + (n/10%10)*10 + (n/100);
    printf("%d\n",m); // 输入250，输出25
    printf("%03d\n",m); // 输入250，输出025
    */

    // 变量交换（1）
    /*
    int a,b,t;
    scanf("%d%d",&a,&b);
    t = a;
    a = b;
    b = t;
    printf("%d %d\n",a,b);
    */

    // 变量交换（2）
    /*
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d\n",a,b);
    */

   // 变量交换（3）
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d %d\n",b,a);

    return 0;
}
