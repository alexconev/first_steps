#include <iostream>
using namespace std;

int main() {

	int a, b, а1, а2, а3, b1, b2, b3, c;

	cin >> a >> b;

	a1 = a / 100;
	a2 = a / 10 % 10;
	a3 = a % 10;

	b1 = b / 100;
	b2 = b / 10 % 10;
	b3 = b % 10;

	a = a1+b3;
	if(a > 9){
		a1 = a / 10;
		a2 = a % 10;
		a = a1 + a2;
	}

	b = a2+b2;
	if(b > 9){
		b1 = b / 10;
		b2 = b % 10;
		b = b1 + b2;
	}

	c = a3+b1;
	if(a > 9){
		a1 = c / 10;
		a2 = c % 10;
		c = a1 + a2;
	}

	cout << a << b << c << endl;

	return 0;
}