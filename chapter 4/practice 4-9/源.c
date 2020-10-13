#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int i=0;
	printf("ÕýÕûÊý£º");
	scanf("%d", &n);

	if (n>0)
	{
		while (i < n) {
			printf("+");
			i++;
			if (i<n)
			{
				printf("-");
				i++;
			}
		}
	}

	return 0;
}