#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
max(int a,int b);
int main()
{
	int a, b, m, n, A;
	puts("请输入四个整数。");	
	scanf("%d %d %d %d", &a, &b, &m, &n);
	a = max(a, b);
	m = max(m, n);
	A = max(a, m);
	printf("最大值为：%d", A);
	
	return 0;
}
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}