#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	double m;
	puts("����������������");
	printf("����a��");
	scanf("%d", &a);
	printf("����b��");
	scanf("%d", &b);
	m = 100.0 * (a+0.0) / b;

	printf("a��b��%f%%", m);//%f
	return 0;
}