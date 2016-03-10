#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b, c;

	cin >> a >> b >> c;

	cout << 'knigi - ' << ceil(float(a) / 15) << 'vestnici - ' << ceil(float(b) / 15) << 'spisania - ' << ceil(float(c) / 15) << endl;

	return 0;
}