#include <iostream>
using namespace std;

void order(int&,int&);
void print(int,int,int);

int main(){
	int x=3,y=0,z=-5;
	
	print(x,y,z);
	cout << "order(x,y)" << endl;
	order(x,y);
	print(x,y,z);
	
	order(y,z);
	cout << "order(y,z)"<<endl;
	print(x,y,z);

	order(z,x);
	cout << "order(z,x)" << endl;
	print(x,y,z);

	order(z,x);
	cout << "order(z,x)" <<endl;
	print(x,y,z);

	return 0;
}

void print(int a,int b,int c){
	cout << "x:" << a << endl
		 << "y:" << b << endl
		 << "z:" << c << endl;
}

void order(int&a,int&b){
	int tmp=0;
	if(a>b){
		tmp=a;
		a=b;
		b=tmp;
	}
}
