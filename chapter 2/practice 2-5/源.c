#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	double m;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);
	m = 100.0 * (a+0.0) / b;

	printf("a是b的%f%%", m);//%f
	return 0;
}