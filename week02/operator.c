#include <stdio.h>

// 重新学习++ --，理解：a++表示计算之前的值，++a表示计算之后的值

int main(){
  int a = 10;
  printf("a++: %d \n", a++);
  printf("a: %d \n", a);

  printf("++a: %d \n", ++a);
  printf("a: %d \n", a);
}