#include <stdio.h>

int main()
{
	int n;

	printf("n을 입력 : ");
	scanf_s("%d", &n);

	// *
	// **
	// ***
	// ****
	// *****
	// for (int i = 1; i <= n; i++) {
	//	for (int j = 1; j <= i; j++)
	//		printf("*");
	//	printf("\n");
	//}

	// * 1
    // *** 3 
    // ***** 5 
    // ******* 7 
    // ********** 9
    // j는 1~(2*i - 1)까지 변한다
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			if (i % 2 != 0)
			    printf("*");
		printf("\n");
	}
}
