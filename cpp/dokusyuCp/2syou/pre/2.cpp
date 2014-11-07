#include <iostream>
using namespace std;

#define SIZE 10

class student{
	char name[10][80];
	char address[10][80];
	int num;
	public:
	void init();
	void store();
	void display();
};

void student::init(){
	num=0;
}

void student::store(){
	if(num==SIZE){
		cout << "容量いっぱいです。\n";
		return;
	}
	cout << "名前は? : ";
	cin >> name[num];
	cout << "アドレスは? : ";
	cin >> address[num];
	num++;
}

void student::display(){
	if(num==0){
		cout << "まだだれも入力されていません\n";
		return;
	}
	for(int i=0;i<num;i++){
		cout << i+1 <<"人目\n";
		cout << name[i] << "/" << address[i] << "\n\n";
	}
}

int main(){
	student s1,s2;
	s1.init();
	s2.init();
	s1.store();
	s1.store();
	s1.display();
	s2.display();

	return 0;
}
