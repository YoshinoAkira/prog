#include <iostream>
using namespace std;

int main(){
	int a = -8;
	a >>= 1;
	cout << a << endl;

	a += 5;
	cout << a << endl;
	a >>= 1;
	cout << a << endl;
	a <<= 1;
	cout << a << endl;
	return 0;
}
