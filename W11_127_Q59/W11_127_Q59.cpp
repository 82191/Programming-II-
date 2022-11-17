#include <stdio.h>
#define Square(X) ((X) * (X))

int main()
{
	int a = 5;

	printf("%d\n", Square(a));
	printf("%d\n", Square(a + 1));
	printf("%d\n", 100/Square(a));
}
