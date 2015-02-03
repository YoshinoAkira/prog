#include <iostream>
using namespace std;

class A{
	int i;
	public:
	A(int a){i=a;}
	int geta(){return i;}
};

class B{
	int j;
	public:
	B(int a){j=a;}
	int getb(){return j;}
};

class C:public A,public B{
	int k;
	public:
	C(int a,int b,int c):A(b),B(c){
		k = a;
	}
	void showabc(){
		cout << geta() << ' ' << getb() << ' ' << k << endl;
	}
};


int main(){
	C ob(1,2,3);
	ob.showabc();

	return 0;
}
