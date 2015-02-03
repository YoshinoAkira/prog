#include <iostream>
using namespace std;

class base{
	protected:
		int a,b;
	public:
		int d;
		void setab(int n,int m){a = n; b=m;}
};

class derived : public base {
	int c;
	public:
		void setc(int n){c=n;}
		void showabcd(){
			cout << a << ' ' << b << ' ' << c << ' ' << d <<endl;
		}
};

int main(){
	derived ob;
	ob.setab(1,2);
	ob.setc(3);
	ob.d=10;

	ob.showabcd();


	return 0;
}
