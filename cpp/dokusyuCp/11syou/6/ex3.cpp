#include <iostream>
using namespace std;

int main(){
	int i;
	cout << "数字を入力:";
	cin >> i;

	int j,fact=1;

	for(j=i;j>=1;j--) fact = fact * j;
	cout << "階乗は" << fact << "\n";

	return 0;
	
}
