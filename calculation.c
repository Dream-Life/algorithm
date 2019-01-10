#include<stdio.h>
#include<math.h>

int main(){
    // 整数用%d输出，实数(浮点数)用%f输出
    // 整数/整数=整数，浮点数/浮点数=浮点数
    printf("1+2=%d\n",1+2);
    printf("3-4=%d\n",3-4);
    printf("5×6=%d\n",5*6);
    printf("8/4=%d\n",8/4);
    printf("8/5=%d\n",8/5);
    printf("\n");
    // %.1f，c语言区分大小写，1是小数点后几位
    printf("8.0/5.0=%.1f\n",8.0/5.0);
    printf("8.0/5.0=%.2f\n",8.0/5.0);
    printf("8.0/5.0=%f\n",8.0/5.0);
    printf("8/5=%.1f\n",8/5);
    printf("8.0/5.0=%d\n",8.0/5.0);
    printf("\n");
    // 复杂表达式计算
    // 整数-浮点数=浮点数,整数先变浮点数，在进行计算
    // sqrt算数平方根
    printf("%.8f\n",1+2*sqrt(3)/(5-0.1));
    printf("\n");
    return 0;
}