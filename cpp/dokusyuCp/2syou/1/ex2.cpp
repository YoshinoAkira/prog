#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#define SIZE 255

class strtype{
	char *p;
	int len;
	public:
	strtype();
	~strtype();
	void set(char *ptr);
	void show();
};

strtype::strtype(){
	p = (char *)malloc(SIZE);
	if(!p){
		cout <<"error:\n";
		exit(1);
	}
	*p='\0';
	len=0;
}

strtype::~strtype(){
	cout << "pを解放する\n";
	free(p);
}

void strtype::set(char *ptr){
	if(strlen(ptr) >= SIZE){
		cout << "文字列が大きすぎる\n";
		return;
	}
	strcpy(p,ptr);
	len = strlen(p);
}

void strtype::show(){
	cout << p << " - 長さ: " << len;
	cout <<"\n";
}

int main(){
	strtype s1,s2;

	s1.set((char *)("This is a test."));
	s2.set((char *)("I like C++."));
	s1.show();
	s2.show();

	return 0;
}
