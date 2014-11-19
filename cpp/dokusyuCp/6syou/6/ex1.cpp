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

int main(){
	strtype a("Hello"),b("There");

	cout << a.get() << "\n";
	cout << b.get() << "\n";

	a = b;

	cout << a.get() << "\n";
	cout << b.get() << "\n";
	return 0;
}
