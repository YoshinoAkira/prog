#include <iostream>
using namespace std;

void mag(long &num, long oder);

int main(){
	long int a=4;
	cout << a << endl;
	mag(a,2);
	cout << a << endl;

	return 0;
}


void mag(long &num, long order){
	for(int i=0;i<order;i++){
		num*=10;
	}
}

