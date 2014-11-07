#include <iostream>
using namespace std;

class letters{
	char ch;
	public:
	letters(char c){ch=c;}
	char get_ch(){return ch;}
};


int main(){	
	letters le[10]={'A','B','C','D','E','F','G','H','I','J'};
	for(int i=0;i<10;i++){
		cout << "le:" <<le[i].get_ch() << "\n";
	}
	cout << "\n";

	return 0;

}
