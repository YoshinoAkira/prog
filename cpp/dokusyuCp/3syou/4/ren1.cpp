#include <iostream>
using namespace std;

class pr2;
class pr1{
	int printing;
	public:
	pr1(){printing = 0;}
	void set_print(int status){printing = status;}
	friend int inuse(pr1 p1,pr2 p2);
};

class pr2{
	int printing;
	public:
	pr2(){printing=0;}
	void set_print(int status){printing = status;}
	friend int inuse(pr1 p1,pr2 p2);
};

int inuse(pr1 p1,pr2 p2){
	return p1.printing | p2.printing;
}


int main(){
	pr1 p11,p12;
	pr2 p21,p22;
	p11.set_print(1);
	p21.set_print(1);

	cout <<	"1,1: " << inuse(p11,p21) << "\n";
	cout <<	"1,0: " << inuse(p11,p22) << "\n";
	cout << "0,1: " << inuse(p12,p21) << "\n";
	cout << "0,0: " << inuse(p12,p22) << "\n";

	return 0;
}
