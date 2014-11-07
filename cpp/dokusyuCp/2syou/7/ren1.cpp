#include <iostream>
using namespace std;

#define SIZE 10
class stack{
	int stck[SIZE];
	int tos;
	public:
	stack(){tos=0;}
	void push(int n){
		if(tos==SIZE){
			cout << "stack is full\n";
			return;
		}
		stck[tos++]=n;
	}	
	
	int pop(){
		if(tos==0){
			cout << "stack is empty\n";
			return 0;
		}
		tos--;
		return stck[tos];
	}
};


int main(){
	stack s1,s2;
	int i,j,d;
	d=5;
	cout << "d--" <<d-- <<"\n";
	cout <<"(d--)"<< (d--) << "\n";
	cout << "d" << d << "\n";
	cout << "--d" << --d << "\n";
	for(i=0;i<12;i++){
		s1.push(i);
	}
	for(;i<25;i++){
		s2.push(i);
	}
	for(j=0;j<12;j++){
		cout << "s1.pop: " << s1.pop() << "\n";
	}
	cout << "\n";
	for(;j<24;j++){
		cout << "s2.pop: " << s2.pop() << "\n";
	}

	return 0;
}
