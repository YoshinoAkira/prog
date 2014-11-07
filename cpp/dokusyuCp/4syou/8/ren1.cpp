#include <iostream>
#include <cstdlib>
using namespace std;

class array{
	int tate,yoko;
	char *p;
	public:
	array(int n,int m);
	~array(){delete [] p;}
	char &put(int a,int b);
	char get(int a,int b);
	void show();
	void init();
};



array::array(int n,int m){
	tate = n;
	yoko = m;
	p = new char[tate*yoko];
}

char &array::put(int a,int b){
	if(a<0 || a >tate || b < 0 || b > yoko){
		cout << "OutOfBoundsException:\n";
		exit(1);
	}
	int spot=yoko*(a-1)+b-1;
	return p[spot];
}

char array::get(int a, int b){
	if(a<0 || a> tate || b < 0 || b > yoko){
		cout << "OutOfBoundsException:\n";
		exit(1);
	}
	int spot = yoko*(a-1)+b-1;
	return p[spot];
}

void array::init(){
	for(int i=0;i<tate*yoko;i++){
		p[i]='a';
	}
}

void array::show(){
	for(int i=0;i<tate*yoko;i++){
		cout << p[i] << " " ;
	}
	cout << "\n";
}

int main(){
	array ar(4,2);
	ar.init();
	ar.show();
	ar.put(1,2)='Z';
	ar.put(4,2)='p';
	ar.put(3,1)='r';
	ar.show();
	return 0;
}
