#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, m;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);
	m = 100 * a / b;


	printf("a是b的%d%%", m);
	puts("%");//两种打印百分号的方法
	return 0;
}