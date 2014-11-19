#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;


class strtype{
	char *p;
	public:
		strtype(char *s);
		strtype(const strtype &o);
		~strtype(){delete [] p;}
		char *get(){return p;}
};

strtype::strtype(char *s){
	int l;
	l = strlen(s)+1;

	p=new char [l];
	cout << "通常コンストラクタ:\n";
	printf("p=%p\n",p);
	strcpy(p,s);
}

strtype::strtype(const strtype &o){
	int l;
	l=strlen(o.p)+1;
	p=new char [l];
	cout << "コピーコンストラクタ:";
	printf("p=%p  o.p=%p\n",p,o.p);
	strcpy(p,o.p);
}

void show(strtype x){
	char *s;
	cout << "showの中、";
	printf("x.get()=%p\n",x.get());
	s=x.get();
	cout << s << "\n";
}

int main(){
	strtype a("Hello"),b("There");
	show(a);
	show(b);

	return 0;
}
