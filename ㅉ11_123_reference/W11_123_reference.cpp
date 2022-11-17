#include <iostream>
using namespace std;

void swap(int &a, int &b) {   // 참조변수 
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a, b;

	cout << "두 숫자 입력 : ";
	cin >> a >> b;

	swap(a, b);
	cout << "a = " << a << ", b = " << b << endl;
}

