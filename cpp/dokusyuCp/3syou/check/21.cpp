#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 26
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

stack loadstack(int upper){
	if(upper==1){
		stack s(26);
		for(char C='A';C<='Z';C++){
			s.push(C);
		}
		return s;
	}
	else{
		return loadstack();
	}
}

void showstack(stack ob){
	char c;
	while(c=ob.pop()){cout << c << " ";}
	cout << "\n";
}



int main(){
	stack s1(SIZE),s2(SIZE);
	s1=loadstack();
	showstack(s1);
	s2=loadstack(1);
	showstack(s2);
	return 0;
}
