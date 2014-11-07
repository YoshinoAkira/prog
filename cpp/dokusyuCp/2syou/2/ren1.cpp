#include <iostream>
#include <cstdlib>
using namespace std;

class stack{
	char *stck;
	int tos,size;
	public:
	stack(int num);
	~stack();
	void push(char ch);
	char pop();
	void show();
};

stack::stack(int num){
	stck=(char *)malloc(num);
	tos = 0;
	size = num;
	cout << "construction:" << num << "バイト用意しました。\n";
}

stack::~stack(){
	free(stck);
	cout << "メモリ解放終了\n";
}

void stack::push(char ch){
	if(tos+1==size){
		cout << "stack is full:\n";
		return;
	}
	tos++;
	stck[tos]=ch;
}

char stack::pop(){
	if(!tos){
		cout << "stack is empty\n";
		return '\0';
	}
	tos--;
	return stck[tos+1];
}

int main(){
	stack s1(100);
	s1.push('a');
	s1.push('b');
	s1.push('c');
	cout << "s1.pop:" << s1.pop() << "\n";
	cout << "s1.pop:" << s1.pop() << "\n";
	cout << "s1.pop:" << s1.pop() << "\n";
	cout << "s1.pop:" << s1.pop() << "\n";

	return 0;
}
