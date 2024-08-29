#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

sum(int a, int b)
{
	return a+b;
}
int main(void)
{
	int num1;
	int num2;
	int result;

	scanf("%d %d", &num1, &num2);
	result = sum(num1, num2);
	printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);

	return 0;
}
