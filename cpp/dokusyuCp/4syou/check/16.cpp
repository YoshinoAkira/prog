#include <iostream>
using namespace std;

void recip(double &f);

int main(){
	double l=334.334;

	cout << l << "\n";

	recip(l);
	cout << l << "\n";
	return 0;
}

void recip(double &f){
	f = 1/f;
}
