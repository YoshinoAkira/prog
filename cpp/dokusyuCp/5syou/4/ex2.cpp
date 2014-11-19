#include <iostream>
using namespace std;


void f(unsigned char c){
	cout << "u char:"<<c<<endl;
}

void f(char c){
	cout << "char:"<<c << endl;
}

int main(){
	f('c');
//	f(86);

	return 0;
}
