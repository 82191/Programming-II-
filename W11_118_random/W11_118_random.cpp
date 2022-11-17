#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

	for (int i = 1; i <= 5; i++)
		printf("%d\n", rand());

	//주사위 10번 던지는 것을 시뮬레이션
	for (int i = 0; i < 10; i++)
		printf("주사위 %d\n", rand() % 6 + 1);  // 외우기
