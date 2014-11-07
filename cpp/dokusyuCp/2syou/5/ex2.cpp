#include <iostream>
using namespace std;
union bits{
	bits(double n);
	void show_bits();
	double d;
	unsigned char c[sizeof(double)];
};

bits::bits(double n){
	d=n;
}

void bits::show_bits(){
	int i,j;
	for(j=sizeof(double)-1;j>=0;j--){
		cout << "バイト単位のビットパターン" << j << ": "  ;
		for(i=128;i;i>>=1){
			if(i & c[j])cout << "1";
			else cout << "0";
		}
		cout << "\n";
	}
}

int main(){
	bits ob(512);
	cout << "sizeof bits:" << sizeof(bits) << "\n";
	ob.show_bits();
	return 0;
}
