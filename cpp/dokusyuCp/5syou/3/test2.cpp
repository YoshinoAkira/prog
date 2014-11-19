#include <iostream>
using namespace std;

const int a=1;
const int b=2;
const int c=3;


int main(){
	int num;
	cout << "input num:";
	cin >> num;
	switch(num){
		case a:
			cout << "a\n";
			break;
		case b:
			cout << "b\n";
			break;
		case c:
			cout << "c\n";
			break;
		default:
			cout << "nothing\n";
	}

	return 0;
}
