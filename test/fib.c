#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main(void)
{
	int i,n;
	printf("������Ҫ���㵽�ͼ����쳲��������� ��");
	scanf("%d", &n);
	for(i=0; i<=n; i++)
		printf("fib(%d)=%d\n", i, fib(i)); 
	
	return 0;
 } 
 
 int fib(int n)
 {
 	if(n == 0)
 		return 0;
 	else if(n == 1 || n == 2)
 		return 1;
 	else
 		return (fib(n-1) + fib(n - 2));
 }
