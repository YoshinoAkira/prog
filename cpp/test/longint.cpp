#include <iostream>
#define intmax 2147483647
#define uintmax 4294967294
using namespace std;
union a{
	unsigned int k[3];
};
class longint{
	public:
	union a b;
	
};

int main(){
	cout << sizeof(union a) << endl;
	class longint af;
	af.b.k[0]= uintmax;
	af.b.k[1]=0;
	af.b.k[2]=0;
	int j=1;
	int k=1;
	for(int i=0;i<32;i++){
		j |= k;
		k <<=1;
		cout << j << "::" << k << endl;
	
	}

	cout << af.b.k[0] << endl;
	
	cout << af.b.k[2] << ":" << af.b.k[1] << ":" << af.b.k[0] << endl;
	af.b.k[0]+=2;
	
	cout << af.b.k[2] << ":" << af.b.k[1] << ":" << af.b.k[0] << endl;
	return 0;
}

