#include<stdio.h>

int main(){
    // 一件衣服95元，满300打八五折，输入件数，输出价格
    double n,m;
    scanf("%lf",&n);
    if(n*95<300)
        m = n*95;
    else
        m = n*95*0.85;     
    printf("%.2f\n",m);    
    return 0;
}