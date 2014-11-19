#include <iostream>
using namespace std;

class coord{
	int x,y;
	public:
	coord(int i=0,int j=0){x=i;y=j;}
	void getxy(int &i,int &j){i=x;j=y;}
	coord operator--();
	coord operator--(int notused);
	coord operator+();
	coord operator+(coord ob);
	void show();
};

coord coord::operator--(){
	--x;
	--y;
	return *this;
}

coord coord::operator--(int notused){
	x--;
	y--;

	return *this;
}

coord coord::operator+(){
	if(x<0) x=-x;
	if(y<0) y=-y;

	return *this;
}

coord coord::operator+(coord ob){
	coord tmp;
	tmp.x = x + ob.x;
	tmp.y = y + ob.y;
	return tmp;
}

void coord::show(){
	cout << "x: " << x << "  y: " << y << endl;
}

int main(){
	coord o1(10,10),o2(5,7),o3(-4,3),o4(-10,-2),o5;

	o1.show();
	o1--;//o1.x=9,y=9
	o1.show();
	--o1;//o1.x=8,y=8
	o1.show();
	o5 = o1-- + o2;//o5.x=13, y=15
	o1.show();
	o5.show();//o1.x=7,y=7
	
	o5 = --o1+o2;//o5.x=11,y=13
	o1.show();//o1.x=6,y=6  
	o5.show();

	cout << endl;

	o4 = +o4;
	+o3;
	o3.show();
	o4.show();
	

	int a=3,b=10,c=-5,d;
	d= a++ + b;
	cout << d << endl; 
	return 0;
}
