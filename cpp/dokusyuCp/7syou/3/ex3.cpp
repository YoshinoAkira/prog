#include <iostream>
using namespace std;

class base{
	int i;
	public:
		base(int n){i=n; cout << "baseコンストラクタ\n";}
		~base(){cout << "baseデストラクタ\n";}
		void showi(){cout << i << endl;}
};

class derived : public base{
	int j;
	public:
		derived(int n):base(n){j=n; cout << "derivedコンストラクタ\n";}
		~derived(){cout << "derivedデストラクタ\n";}
		void showj(){cout << j << endl;}
};

int main(){
	derived o(10);
	o.showi();
	o.showj();

	return 0;
}
