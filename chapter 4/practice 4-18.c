 //��дһ�γ��򣬡�*��ÿ��ʾ������С�
#include <stdio.h>
int main()
{
    const int length = 5;
    int a, cnt,n, m,t;
    int i = 0;
    printf("��ʾ���ٸ���");
    scanf("%d", &a);

    cnt = a / 5;
    i = a % 5;
    for (n=0; n < cnt;n++ )
    {
        for (m = 0; m <length ; m++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (t = 0; t < i; t++)
    {
        printf("*");
    }
    return 0;
}
