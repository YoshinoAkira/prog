#include <iostream>
using namespace std;

class coord{
	int x,y;
	public:
	coord(int i=0,int j=0){x=i;y=j;}
	void getxy(int &i,int &j){i=x;j=y;}
	friend coord operator-(coord &ob);
	friend coord operator/(coord &ob1,coord &ob2);
	void show();
	friend coord operator*(coord ob,int);
	friend coord operator*(int ,coord ob);
	coord cbyint(int);
};

coord coord::cbyint(int a){
	coord temp;
	temp.x = x * a;
	temp.y = y * a;
	return temp;
}

coord operator*(coord ob,int a){
	return ob.cbyint(a);
}

coord operator*(int a,coord ob){
	return ob.cbyint(a);
}

void coord::show(){
	cout << "x: " << x << "y: " << y << endl;
}

coord operator-(coord &ob){
	if(ob.x>0)ob.x*=-1;
	if(ob.y>0)ob.y*=-1;
	return ob;
}

coord operator/(coord &ob1,coord &ob2){
	coord temp;
	temp.x=ob1.x/ob2.x;
	temp.y=ob1.y/ob2.y;
	return temp;
}


int main(){
	coord o1(10,10),o2(5,3),o3(-10,3),o4;
	o4=o2*3;
	o4.show();
	o4=2*o2;
	o4.show();

	return 0;
}



