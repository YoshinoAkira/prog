#include <iostream>
#include <cstring>
using namespace std;

enum yn {no,yes};
enum color{red,yellow,green,orange};
void out(enum yn x);
char *c[]={"赤","黄","緑","オレンジ"};

class fruit{
	public:
		enum yn annual;
		enum yn perennial;
		enum yn tree;
		enum yn tropical;
		enum color clr;
		char name[40];
};


class Apple:public fruit{
	enum yn cooking;
	enum yn crunchy;
	enum yn eating;
	public:
	void seta(char *n, enum color c, enum yn ck, enum yn crchy,enum yn e);
	void show();
};

class Orange:public fruit{
	enum yn juice;
	enum yn sour;
	enum yn eating;
	public:
	void seto(char *n,enum color c, enum yn j,enum yn sr, enum yn e);
	void show();
};

void Apple::seta(char *n,enum color c, enum yn ck, enum yn crchy,enum yn e){
	strcpy(name,n);
	annual = no;
	perennial = yes;
	tree = yes;
	tropical = no;
	clr = c;
	cooking = ck;
	crunchy = crchy;
	eating = e;
}

void Orange::seto(char *n,enum color c, enum yn j, enum yn sr, enum yn e){
	strcpy(name,n);
	annual = no;
	perennial = yes;
	tree = yes;
	tropical = yes;
	clr = c;
	juice = j;
	sour = sr;
	eating = e;
}

void Apple::show(){
	cout << name << "りんご:" << "\n";
}

void Orange::show(){
	cout << name << "オレンジ" << "\n";
}

void out(enum yn x){
	if(x==no) cout <<"no \n";
	else cout << "yes\n";
}

int main(){
	Apple a1,a2;
	Orange o1,o2;

	a1.seta("レッドデリシャス",red,no,yes,yes);
	a2.seta("ジョナサン",red,yes,no,yes);

	o1.seto("ネーブル",orange,no,no,yes);
	o2.seto("バレンシア",orange,yes,yes,no);

	a1.show();
	a2.show();
	o1.show();
	o2.show();

	return 0;
}

