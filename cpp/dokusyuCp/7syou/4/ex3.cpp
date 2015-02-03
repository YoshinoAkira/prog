#include <iostream>
using namespace std;


class B1{
	public:
		B1(){cout << "B1 のコンストラクタ\n";}
		~B1(){cout << "B1 のデストラクタ\n";}
};

class B2{
	public:
		B2(){cout << "B2 のコンストラクタ\n";}
		~B2(){cout << "B2 のデストラクタ\n";}
};

class D: public B2,public B1{
	public:
		D(){cout << "D のコンストラクタ\n";}
		~D(){cout << "D のデストラクタ\n";
		}
};

int main(){
	D ob;

	return 0;
}
