#include <iostream>
using namespace std;

int d=5;
static union{
	short int i;
	unsigned char ch[2];
};

int main(){
	cout << d <<"\n";
	i = 64;
	cout << i <<"\n";
	char tmp;
	tmp=ch[1];
	ch[1]=ch[0];
	ch[0]=tmp;
	cout << i << "\n";

	return 0;
}
