#include <iostream>
using namespace std;

class samp{
	int a;
	public:
	samp(int n){a=n;}
	samp(){a=0;}
	int get_a(){return a;}
};


int main(){
	samp ob(88);
	samp obarray[10];

	return 0;
}
