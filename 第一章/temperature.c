#include<stdio.h>

int main(){
    // 华氏温度f转换成摄氏温度c，c=5(f-32)/9
    double f;
    scanf("%lf",&f);
    printf("%.3f\n",5*(f-32)/9);
    return 0;
}