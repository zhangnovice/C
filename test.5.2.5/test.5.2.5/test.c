#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = 0;
	scanf("%d%d", &a, &b);
	//scanf_s;
    c = a + b;
	printf("c =%d\n", c);
		
	return 0;
}