#include <iostream>
using namespace std;

union uni{
	uni(short int ss);
	void swap();
	short int s;
	unsigned char ch[2];
};

uni::uni(short int ss){
	s=ss;
}

void uni::swap(){
	unsigned char tmp;
	tmp=ch[0];
	ch[0]=ch[1];
	ch[1]=tmp;
}



int main(){
	uni u1(64),u2(1);
	cout << sizeof(short int) << "\n";
	cout <<"u1.s: " << u1.s <<"\n";
	cout <<"u2.s: " << u2.s << "\n";
	u1.swap();
	u2.swap();
	cout << "u1.s: " << u1.s<<"\n";
	cout << "u2.s: " << u2.s<<"\n";

	return 0;
}
