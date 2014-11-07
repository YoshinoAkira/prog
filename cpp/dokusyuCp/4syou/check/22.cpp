#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype{
	char *p;
	int len;
	public:
	strtype(char *ptr);
	~strtype();
	void show();
};

strtype::strtype(char *ptr){
	len = strlen(ptr)+1;
	p = new char [len];
	strcpy(p,ptr);
}

strtype::~strtype(){
	delete [] p;
}

void strtype::show(){
	cout << p << "  長さ:" << len << "\n";
}

int main(){
	strtype s1("This is a test."), s2("I like C++.");
	s1.show();
	s2.show();

	return 0;
}
