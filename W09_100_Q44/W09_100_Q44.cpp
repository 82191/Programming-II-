#include <stdio.h>

double plus(double a, double b)
{
	return a + b;
}

double minus(double a, double b)
{
	return a - b;
}

double divide(double a, double b)
{
	return a / b;
}

double multiply(double a, double b)
{
	return a * b;
}

int main()
{
	double a, b;
	printf("두 수를 입력 : ");
	scanf_s("%lf %lf", &a, &b);

	double sum = plus(a, b);
	double diff = minus(a, b);
	double div = divide(a, b);
	double mul = multiply(a, b);

	printf("%.1f\n", sum);
	printf("%.1f\n", diff);
	printf("%.1f\n", div);
	printf("%.1f\n", mul);
}

