#include <stdio.h>

int main()
{
	int n;
	int i = 1;
	int sum = 0;
	int evensum = 0;
	int oddsum = 0;

	printf("n을 입력 : ");
	scanf_s("%d", &n);

	while (i <= n) {
		sum += i;
		i++;

		if (i % 2 == 0)
			evensum += i;
		else
			oddsum += i;
	}
	printf("sum = %d\n", sum);
	printf("evensum = %d\n", evensum);
	printf("oddsum = %d\n", oddsum);
}
