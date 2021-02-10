#include <stdio.h>

int main(){
	int a = 0;
	int b = 0;

	printf("请输入两个整数：");

	scanf("%d %d", &a, &b);

	int c = a + b;

	printf("两数之和为：%d \n", c);
}
