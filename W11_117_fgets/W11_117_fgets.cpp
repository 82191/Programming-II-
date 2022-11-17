#include <stdio.h>

int main()
{
	int n;

	scanf_s("%d", &n);

	char ss[20];
	sprintf_s(ss, "%d", n);
	printf("ss = %s\n", ss);
}
