#include <iostream>
using namespace std;


class threed{
	int x,y,z;
	public:
		threed(int i=0,int j=0,int k=0){
			x=i,y=j,z=k;
		}
		void get(int &i,int &j,int &k){
			i = x, j=y, k=x;
		}
		threed operator+(threed ob);
		threed operator-(threed ob);
		threed operator++();
		threed operator--();
		void show();
};

void threed::show(){
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;
}

threed threed::operator+(threed ob){
	threed temp;
	temp.x=x+ob.x;
	temp.y=y+ob.y;
	temp.z=z+ob.z;
	return temp;
}

threed threed::operator-(threed ob){
	threed temp;
	temp.x=x-ob.x;
	temp.y=y-ob.y;
	temp.z=z-ob.z;
	return temp;
}

threed threed::operator++(){
	x++;
	y++;
	z++;
	return *this;
}

threed threed::operator--(){
	x--;
	y--;
	z--;
	return *this;
}

int main(){
	threed t1,t2(3,3,4),t3(10,20,30);
	t1 = t2+t3;
	t1.show();
	t2.show();
	t3.show();
	cout << endl;
	
	t1 = t2-t3;
	t1.show();
	t2.show();
	t3.show();
	cout << endl;
	
	++t1;
	t1.show();
	--t1;
	t1.show();

	return 0;
}
