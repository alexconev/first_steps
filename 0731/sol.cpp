#include <iostream>
use namespace std;

int main(){
	int k, e, d, s;

	cin >> k;
	
	e = k % 10;
	d = k / 10 % 10;
	s = k / 100;

	cout << s << d << e << endl;
	
	return 0;
}