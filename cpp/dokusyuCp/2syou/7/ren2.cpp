#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class strtype{
	char *p;
	int len;
	public:
	strtype(char *c){
		len=strlen(c);
		p=(char *)malloc(len);
		strcpy(p,c);
	}
	~strtype(){
		free(p);
	}
	void show(){
		cout << p << "   "<< "長さ: "<< len <<"\n";
	}
};


int main(){
	strtype s1((char *)"this is string for s1."),s2((char *)"this is string for s2, yeah.");
	s1.show();
	s2.show();
	return 0;
}
