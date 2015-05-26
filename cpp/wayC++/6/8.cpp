#include <iostream>
using namespace std;

int& ref(){
	static int x = 0;
	return x;
}

int main(){
	int &r = ref();

	r = 10;
	cout << ref() << endl;
	cout << "input:";
	cin >> ref();

	cout << ref() << endl;
	return 0;
}
