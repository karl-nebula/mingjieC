#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
max(int a,int b);
int main()
{
	int a, b, m, n, A;
	puts("�������ĸ�������");	
	scanf("%d %d %d %d", &a, &b, &m, &n);
	a = max(a, b);
	m = max(m, n);
	A = max(a, m);
	printf("���ֵΪ��%d", A);
	
	return 0;
}
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}