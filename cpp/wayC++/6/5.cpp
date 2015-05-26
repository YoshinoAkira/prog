#include <iostream>
using namespace std;

int x = 5;

int main(){
	cout << &x << endl;
	cout << x << endl;
	x =3;
	cout << x << endl;

	int x =114514;
	cout << &x << endl;
	cout << x << endl;

	cout << ::x << endl;
	
	for(int i=0;i<3;i++){
		x = i;
		if(!i){
			cout << &x << " " << &::x << endl;
		}
		cout << x << " " << ::x << endl;
	}

	cout << x << endl;
	cout << ::x << endl;
	return 0;
}
