#include <iostream>

using namespace std;

class myclass{
	public:
		~myclass();
		myclass();
		myclass(const myclass &o);
		myclass f();
};

myclass::myclass(){
	cout << "normal cons\n";
}

myclass::myclass(const myclass &o){
	cout << "copy cons\n";
}

myclass::~myclass(){
	cout << "dest\n";
}

myclass myclass::f(){
	myclass temp;
	cout << "f\n";
	return temp;
}


int main(){
	myclass obj;
	obj = obj.f();
	cout << "\n\nプログラムのおわり\n\n";

	return 0;
}
