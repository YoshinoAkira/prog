#include <iostream>
using namespace std;

int main(){
	union{
		unsigned char bytes[8];
		double value;
	};
	value = 859345.324;

	for(int i=0; i<8;i++){
		cout << (int) bytes[i] << " ";
		cout << "\n";
	}
	return 0;
}
