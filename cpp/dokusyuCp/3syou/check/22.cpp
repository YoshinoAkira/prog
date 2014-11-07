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
	friend char *get_string(strtype *ob);
};

strtype::strtype(char *ptr){
	len = strlen(ptr);
	p=(char *)malloc(len+1);
	strcpy(p,ptr);
}

strtype::~strtype(){
	free(p);
	cout << "p解放\n";
}

void strtype::show(){
	cout << p << " 長さ:" << len ;
	cout << "\n";
}

char *get_string(strtype *ob){
	return ob->p;
}

int main(){
	strtype s1="this is s1.";
	strtype s2="this is a string for s2.";
	s1.show();
	s2.show();
	cout << "a: " << get_string(&s1);
	cout << "\n";
	cout << "b: " << get_string(&s2);
	cout << "\n";

	return 0;
}
