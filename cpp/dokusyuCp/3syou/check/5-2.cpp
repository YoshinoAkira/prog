//改善
#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 27
class stack{
	char *stck;
	int tos;
	public:
	stack(int n){tos=0;stck=(char *)malloc(n);}
	void push(char c);
	char pop();
};


void stack::push(char c){
	if(tos==SIZE){
		cout << "stack is full\n";
		return;
	}
	stck[tos++]=c;
}

char stack::pop(){
	if(tos==0){
		cout << "stack is empty\n";
		return 0;
	}
	return stck[--tos];
}

stack loadstack(){
	stack s(26);
	for(char c='a';c<='z';c++){
		s.push(c);
	}

	return s;
}

void showstack(stack ob){
	char c;
	while(c=ob.pop()){cout << c << " ";}
	cout << "\n";
}


int main(){
	stack s1(SIZE);
	s1=loadstack();
	showstack(s1);
	return 0;
}
