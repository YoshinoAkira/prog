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
};

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
