#include <iostream>
using namespace std;

void myswap(int &,int &);

int main(){
	int a=5,b=10;
	cout << "a=" << a << " b=" << b << endl;
	myswap(a,b);
	cout << "a=" << a << " b=" << b << endl;

	return 0;
}

void myswap(int &x, int &y){
	int tmp;
	tmp = x;
	x = y;
	y = x;
}

