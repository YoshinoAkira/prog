#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	short int i;
	char c;
	i=c=1;
	char ch;
	cout << "i:" << i <<"\n";
	printf("c:%d\n",c);
	while(1){
		cout << "L/R:";
		cin >> ch;

		if(ch=='R'){
			i >>= 1;
			c >>= 1;
		}
		if(ch=='L'){
			i <<= 1;
			c <<= 1;
		}
	cout << "i:" << i << "\n" ;
	printf("c:%d\n",c);
	}

	return 0;
}
