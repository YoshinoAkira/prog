#include <iostream>
using namespace std;

#define SIZE 10
class stack{
	char stck[SIZE];
	int tos;
	public:
	stack();
	void push(char ch);
	char pop();
};

stack::stack(){
	tos=0;
}

void stack::push(char ch){
	if(tos==SIZE){
		cout << "stack is full\n";
		return;
	}
	stck[tos]=ch;
	tos++;
}

char stack::pop(){
	if(tos==0){
		cout << "stack is empty\n";
		return 0;
	}
	tos--;
	return stck[tos];
}

void showstack(stack s){
	char c;
	cout << "関数pop\n";
	while(c=s.pop()) cout << c << "\n";
}

int main(){
	stack s1,s2;
	int i;

	s1.push('a');
	s1.push('b');
	s1.push('c');
	showstack(s1);
	s2=s1;
	for(i=0;i<3;i++) cout << "s1.pop: " << s1.pop() <<"\n";
	for(i=0;i<3;i++) cout << "s2.pop: " << s2.pop() <<"\n";
	
	
	return 0;
}
