#include <iostream>
using namespace std;
#define PI 3.141592
class area_c1{
	public:
		double height;
		double width;
};

class cylinder:public area_c1{
	public:
		cylinder(double h,double w);
		void area();
};

cylinder::cylinder(double h,double w){
	height = h;
	width = w;
}

void cylinder::area(){
	double a;
	a=2*(width/2)*(width/2)*PI + PI*width*height;
	cout << "面積は " << a << "\n";
}

int main(){
	cylinder c1(30,40),c2(10,10);
	c1.area();
	c2.area();
	return 0;
}
