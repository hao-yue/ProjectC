#include <stdio.h>

int main(){

  double foot,inch;

  printf("请输入您的身高尺寸，比如 \"5 7\"表示5英尺7英寸：");

  scanf("%lf %lf", &foot, &inch);

  double height = (foot+inch/12)*0.3048;

  printf("您的身高是：%f\n", height);

  return 0;
}