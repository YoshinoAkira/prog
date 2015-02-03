#include <iostream>
using namespace std;

class base{
	public:
		base(){cout << "baseコンストラクタ\n";}
		~base(){cout << "baseデストラクタ\n";}
};

class derived : public base{
	public:
		derived(){cout << "derivedコンストラクタ\n";}
		~derived(){cout << "derivedデストラクタ\n";}
};

int main(){
	derived o;

	return 0;
}
