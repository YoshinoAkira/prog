#include <iostream>
#include <cstring>
using namespace std;

class mybase{
	char str[80];
	public:
	mybase(char *s){strcpy(str,s);}
	char *get() {return str;}
};


class myderived: public mybase{
	int len;
	public:
	myderived(char *p);
	int getlen(){return len;}
	void show(){cout << get() << "\n";}
};

myderived::myderived(char *p):mybase(p){
	len = strlen(p);
}


int main(){
	myderived ob("hello");

	ob.show();
	cout << ob.getlen() << endl;

	return 0;
}
