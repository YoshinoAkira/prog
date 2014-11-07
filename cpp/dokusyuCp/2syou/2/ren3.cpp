#include <iostream>
#include <cstdlib>
using namespace std;

class box{
	double tate,yoko,takasa,v;
	public:
	box(double a,double b,double c);
	~box();
	void vol();
};

box::box(double a,double b,double c){
	tate=a;
	yoko=b;
	takasa=c;
	v=a*b*c;
}

box::~box(){
	cout << "destruction:\n";
}

void box::vol(){
	cout << "体積は" << v <<"\n";
}

int main(){
	box b1(100,100,100),b2(3,4,5),b3(10,0.25,3);
	b1.vol();
	b2.vol();
	b3.vol();

	return 0;
}
