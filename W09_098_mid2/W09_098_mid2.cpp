#include <stdio.h>

int plus(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}



int main()
{
	int sum = plus(3, 5);
	int diff = minus(3, 5);

	printf("%d\n", sum);
	printf("%d\n", diff);
}

// 함수는 괄호, 매개변수, 리턴값이 있어야 한다