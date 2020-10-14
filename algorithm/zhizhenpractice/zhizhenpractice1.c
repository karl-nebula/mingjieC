/*
return  如果除法成功，返回1，否则返回0  
*/

#include <stdio.h>

int divide(int a,int b,int *result);
int main()
{
	int a=2;
	int b=5;
	int c;
	if(a,b,&c){
		printf("%d/%d=%d\n",a,b,c);
	}
	return 0;
 } 
 
 int divide(int a,int b,int *result)
 {
 	int ret =1;
 	if(b==0)
 	ret=0;
 	else
 	*result=a/b;
 	
 	return ret;
 }
