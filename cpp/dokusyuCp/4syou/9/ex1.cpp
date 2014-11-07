#include <iostream>
using namespace std;

int main(){
	int x;
	int &ref = x;
	x=10;
	ref=10;
	cout << "x: " << x <<"\n" <<"ref: " << ref << "\n";

	ref=100;
	cout << "x: " << x << "\n" << "ref: " << ref << "\n";

	return 0;
}
