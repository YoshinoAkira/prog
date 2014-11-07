#include <iostream>
using namespace std;

class myclass{
	int num;
	public:
	myclass(int x){num=x;}
	friend int isneg(myclass ob);
};

int isneg(myclass ob){
	return ob.num < 0 ? 1:0;
}

int main(){
	myclass m1(-3),m2(5),m3(0);
	
	cout << "m1:" << isneg(m1) << "\n";
	cout << "m2:" << isneg(m2) << "\n";
	cout << "m3:" << isneg(m3) << "\n";

	return 0;
}


