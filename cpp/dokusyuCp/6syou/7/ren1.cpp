#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype{
	char *p;
	int len;
	public:
		strtype(char *s);
		~strtype(){
			cout/* << (unsigned)p */  <<"を開放する。\n";
			delete [] p;
		}
		char * get(){return p;}
		strtype &operator=(strtype &ob);	
		char &operator[](int i);
};

strtype::strtype(char *s){
	len = strlen(s)+1;
	p = new char [len];
	strcpy(p,s);
	cout << "コンストラクタ\n";
}

strtype &strtype::operator=(strtype &ob){
	if(len<ob.len){
		delete [] p;
		len = ob.len;
		p = new char [len];
	}
	else{ 
		len = ob.len;
	}
	strcpy(p,ob.p);

	return *this;
}

char &strtype::operator[](int i){
	if(len<=i){
		cout << "erroo:\n";
		exit(1);
	}
	return p[i];
}

int main(){
	strtype a("Hello"),b("There");

	cout << a.get() << "\n";
	cout << b.get() << "\n";
	for(int i=0;i<5;i++){
		cout << a[i];
	}
	cout << endl;

	a = b;

	cout << a.get() << "\n";
	cout << b.get() << "\n";
	return 0;
}
