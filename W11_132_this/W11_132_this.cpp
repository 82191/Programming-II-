#include <iostream>
using namespace std;

class myClass {
private:
	int x;
public:
	void printfThis() {
		cout << "주소는 " << this << endl;
	}
};

int main()
{
	myClass a, b;

	cout << " a : ";
	a.printfThis();

	cout << " b : ";
	b.printfThis();
}
