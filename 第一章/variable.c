#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    // scanf("%d%d",&a,&b);
    // printf("%d\n",a+b);

    // 圆柱形表面积
    const double pi = acos(-1.0);
    double r,h,s1,s2,s;
    // %lf,l是字母L大小写，不是数字1
    // scanf("%lf%lf",&r,&h);
    printf("Please input r:");
    scanf("%lf",&r);
    printf("Please input h:");
    scanf("%lf",&h);
    s1 = 2*pi*r*h;
    s2 = pi*r*r;
    s = s2*2 + s1;
    printf("Area = %.3f\n",s);
    return 0;
}
