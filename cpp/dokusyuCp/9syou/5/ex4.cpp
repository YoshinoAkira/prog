#include <iostream>
using namespace std;

#define SIZE 10

class stack{
	char stck[SIZE];
	int tos;
	public:
	void init();
	void push(char ch);
	char pop();
	void show();
	void showall();
};

void stack::init(){
	tos = 0;
}

void stack::push(char ch){
	if(tos==SIZE){
		cout << "スタックはいっぱいです。\n";
		return;
	}
	stck[tos] = ch;
	tos++;
}

char stack::pop(){
	if(tos==0){
		cout << "スタックは空です。\n";
		return 0;
	}
	tos--;
	return stck[tos];
}

void stack::show(){
	int i;
	cout << "list: ";
	for(i=0;i<tos;i++){
		cout << stck[i];
	}
	cout << "\n";
}

void stack::showall(){
	int i;
	cout << "list(all): ";
	for(i=0;i<SIZE;i++){
		cout << stck[i];
	}
	cout << "\n";
}

int main(){
	stack s1,s2;
	int i;
	s1.init();
	s2.init();
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');
	s1.show();
	s2.show();

	for(i=0;i<3;i++) cout << "s1をポップする: " << s1.pop() << "\n";
	for(i=0;i<3;i++) cout << "s1をポップする: " << s2.pop() << "\n";
	s1.show();
	s2.show();
	s1.showall();
	s2.showall();
	return 0;
}

