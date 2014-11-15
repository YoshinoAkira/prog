#include <iostream>
#include <cstring>
using namespace std;


class strtype{
	char *p;
	int len;
	public:
		char *getstring(){return p;}
		int getlength(){return len;}
		strtype();
		strtype(const char *,int bytes);
};

strtype::strtype(){
	p = new char[255];
	for(int i=0;i<255;i++){
		*p='\0';
	}
	len = 255;
}

strtype::strtype(const char *str,int bytes){
	p = new char[bytes];
	strcpy(p,str);
	len=strlen(p);
}


int main(){
	strtype s1;
	strtype s2("this is strtype2.");
	cout << "s1:" << endl;
	cout << s1.getstring << endl;
	cout << s1.getlength << endl << endl;

	cout << "s2:" << endl;
		<< s2.getstring << endl;
		<< s2.getlength << endl << endl;
	return 0;
}
