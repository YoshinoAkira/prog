#include <iostream>
#include <cstring>
using namespace std;

class dic{
	char name[30];
	long tel;
	public:
	void set_name(char *c){strcpy(name,c);}
	void set_tel(long n){tel=n;}
	void show(){
		cout << name << " tel:" << tel << "\n";
	}
};


int main(){
	dic *p;
	p = new dic;
	p->set_name((char *)"yoshino akira");
	p->set_tel(8066018641);
	p->show();
	cout << sizeof(long long) << "\n";

	delete p;
	return 0;

}

