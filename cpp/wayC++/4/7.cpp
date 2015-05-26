#include <iostream>
#include <iomanip>
using namespace std;


int main(){
	int a, base;

	cout << "8/10/16:";

	cin >> base;
	
	cout << "num:";
	cin >> a;
	cout << setbase(base) << a << endl;
	cout << a << endl;

	return 0;
}
