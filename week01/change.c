#include <stdio.h>

int main()
{
  int amount = 0;
  int price = 0;

  printf("请输入金额（元）：");
  scanf("%d %d", &price, &amount);

  int change = amount - price;

  printf("找您%d元。 \n", change);

}