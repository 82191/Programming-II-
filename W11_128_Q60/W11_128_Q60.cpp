#include <iostream>
using namespace std;

int main()
{
	int mask = 0x0004;
	int x;

	while (true) {
		cout << "숫자 입력 : ";
		cin >> x;
		if (x < 0)
			break;
		if ((x & mask) == 0x0004)   // 비트연산자의 계산 우선순위가 ==보다 낮아서 괄호처리 해야 함  p.53
			cout << "3번째 비트가 1입니다. " << endl;
		else
			cout << "3번째 비트가 0입니다. " << endl;
	}

	//int oct = 011;

	//printf("%d %o %x\n", oct, oct, oct);
}
