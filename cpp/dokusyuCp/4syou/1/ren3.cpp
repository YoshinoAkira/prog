#include <iostream>
using namespace std;

#define LE letters

class letters{
	char ch;
	public:
	letters(char c){ch=c;}
	char get_ch(){return ch;}
};


int main(){	
	letters le[10]={LE('A'),LE('B'),LE('C'),LE('D'),LE('E'),LE('F'),LE('G'),LE('H'),LE('I'),LE('J')};
	for(int i=0;i<10;i++){
		cout << "le:" <<le[i].get_ch() << "\n";
	}
	cout << "\n";

	return 0;

}
