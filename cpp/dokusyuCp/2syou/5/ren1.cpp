#include <iostream>
using namespace std;
#define SIZE 10

struct stack{
	stack();
	void push(int n);
	int pop();
	void show();
	private:
	int stck[SIZE];
	int tos;
};

stack::stack(){
	tos=0;
	cout <<"const\n";
}

void stack::push(int n){
	if(tos==SIZE){
		cout << "full:"<< tos<<"\n";
		return;
	}
	stck[tos]=n;
	tos++;
}

int stack::pop(){
	if(tos==0){
		cout <<"empty\n";
		return 0;
	}
	tos--;
	return stck[tos];
}

void stack::show(){
	for(int i=0;i<=tos;i++){
		cout << stck[i] << " ";
	}
	cout <<"\n";
}

int main(){
	stack s1,s2;
	int i;

	for(int j=0;j<10;j++){
		cout << j <<" ";
	}
	cout << "\n\n";

	for(i=1;i<12;i++){
		s1.push(i);
	}
	for(;i<24;i++){
		s2.push(i);
	}

	for(i=0;i<13;i++){
		cout << "s1.pop: " <<s1.pop() <<"\n";
	}
	for(;i<27;i++){
		cout << "s2.pop: " << s2.pop()<< "\n";
	}
	return 0;
}
