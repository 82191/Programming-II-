#include <stdio.h>

int main()
{
	int n;
	int i = 0;
	
	printf("n을 입력 : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
		if (n%i == 0)
			printf("%d ", i);
}
