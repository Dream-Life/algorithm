#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int a = n/100, b = ((n%100) - (n%10))/10, c = n%10;
  if (n == (a*a*a + b*b*b + c*c*c)){
    printf("%d%d%d is daffodil\n", a, b, c);
  } else {
    printf("%d%d%d is not daffodil\n", a, b, c);
  }
  return 0;
}
