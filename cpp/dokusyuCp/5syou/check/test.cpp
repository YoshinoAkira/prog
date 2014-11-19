#include <iostream>
using namespace std;
#include <cstdio>
int main(){
	char *c="this is example.";
	char *p=new char[20];
	char *tmpc=c;
	char *tmpp=p;
	int count = 0;
	cout << "a\n";
	for(;*p++=*c++;count++){
		if(*c=='\0'){
			cout << "null文字\n";
		}
	}
	cout << *tmpp << endl;
	
//	printf("c:%p\n",c);
//
//
	cout << endl << count << endl;
	cout << "*c: " << *c <<endl;
	cout <<"c[0]: "<< c[0] << endl;
	cout << "*p: " << *p << endl;
	c=tmpc;
	p=tmpp;
	cout << endl << "ireをしたあと\n";
	cout << "*c: " << *c <<endl;
	cout <<"c[0]: "<< c[0] << endl;
	cout << "*p: " << *p << endl;
	
	return 0;
}
