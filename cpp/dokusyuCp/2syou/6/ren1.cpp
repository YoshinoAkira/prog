#include <iostream>
using namespace std;

inline int myabs(int n){
	return n > 0 ? n:-n;
}

inline long myabs(long n){
	return n > 0 ? n:-n;
}

inline double myabs(double n){
	return n > 0 ? n:-n;
}

int main(){
	int a = -50;
	long b = -23432423;
	double c = -4343.4324 ;
	cout << a << " : " << myabs(a) <<"\n";
	cout << b << " : " << myabs(b) << "\n";
	cout << c << " : " << myabs(c) << "\n";

	return 0;
}
