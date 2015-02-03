#include <iostream>
using namespace std;

#define MAX 5

class card{
	char title[MAX][80];
	char author[MAX][80];
	int nob;
	
	public:
	void init();
	void store();
	void show();
	
};

void card::init(){
	nob = 0;
}

void card::store(){
	cout << "本のタイトルは？: ";
	cin >> title[nob];
	cout << "本の著者は？:" ;
	cin >> author[nob];
	nob++;
}

void card::show(){
	int i;
	for(i=0;i<nob;i++){
		cout << i+1 <<"冊目\n";
		cout << "タイトル: " << title[i] <<"\n";
		cout << "著者:" << author[i] << "\n\n";
	}
}

int main(){
	card c1,c2;
	int i;
	c1.init();
	c1.show();
	c1.store();
	c1.show();
	c1.store();
	c1.show();
	c2.init();
	c2.store();
	c2.show();
	return 0;
}
