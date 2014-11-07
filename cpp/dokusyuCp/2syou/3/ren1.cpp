#include <iostream>
using namespace std;
class area_cl{
	public:
		double height;
		double width;
};

class rectangle:public area_cl{
	public:
		rectangle(double h,double w);
		double area();
};

class isosceles:public area_cl{
	public:
		isosceles(double h,double w);
		double area();
};

rectangle::rectangle(double h,double w){
	height = h;
	width = w;
	cout << "construction\n";
}

isosceles::isosceles(double h,double w){
	height = h;
	width = w;
	cout << "iso construction \n";
}
double rectangle::area(){
	cout << "面積は " << height*width << "\n";
}

double isosceles::area(){
	cout << "面積は " << height*width/2 << "\n";
}


int main(){
	rectangle r1(100.0,50),r2(23.5,4.3);
	isosceles i1(100.0,50),i2(23.5,4.3)	;
	r1.area();
	r2.area();
	i1.area();
	i2.area();

	return 0;
}

