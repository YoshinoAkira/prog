#include <iostream>
using namespace std;

int neg(int *num);
int neg(int &num);

int main(){
	int a,b,c;
	a=10,b=0,c=-3;
	cout << "a:" << neg(&a) << "\n";
	cout << "a:" << neg(a) << "\n";
	cout << "b:" << neg(&b) << "\n";
	cout << "b:" << neg(b) << "\n";
	cout << "c:" << neg(&c) << "\n";
	cout << "c:" << neg(c) << "\n";

	return 0;
}

int neg(int *num){
	return -*num;
}

int neg(int &num){
	return -num;
}
