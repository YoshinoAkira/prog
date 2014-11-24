#include <iostream>
using namespace std;


class threed{
	int x,y,z;
	static int count;
	int number;
	public:
	~threed(){cout << "des:"<< number << endl;}
		threed(int i=0,int j=0,int k=0){
			x=i,y=j,z=k;
			count++;
			number = count;
		}
		void get(int &i,int &j,int &k){
			i = x, j=y, k=x;
		}
		threed operator+(threed &ob);
		threed operator-(threed &ob);
		friend threed operator++(threed &ob);
		friend threed operator--(threed &ob);
		friend threed operator+(threed &ob,int d);
		friend threed operator+(int d,threed &ob);
		int operator==(threed ob);
		int operator!=(threed ob);
		int operator||(threed ob);
		void show();
};

void threed::show(){
	cout << "object" << number << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;
}

threed threed::operator+(threed &ob){
	threed temp;
	temp.x=x+ob.x;
	temp.y=y+ob.y;
	temp.z=z+ob.z;
	return temp;
}

threed threed::operator-(threed &ob){
	threed temp;
	temp.x=x-ob.x;
	temp.y=y-ob.y;
	temp.z=z-ob.z;
	return temp;
}

threed operator++(threed &ob){
	cout << "incr\n";
	ob.x++;
	ob.y++;
	ob.z++;
	cout << "incr\n";
	return ob;
}

threed operator--(threed &ob){
	ob.x--;
	ob.y--;
	ob.z--;
	return ob;
}

threed operator+(threed &ob,int d){
	threed temp;
	temp.x = ob.x + d;
	temp.y = ob.y + d;
	return temp;
}

threed operator+(int d, threed &ob){
	threed temp;
	temp.x = ob.x+d;
	temp.y = ob.y+d;
	return temp;
}

int threed::operator==(threed ob){
	if(x==ob.x)
		if(y==ob.y)
			if(z==ob.z)
				return 1;
	return 0;
}

int threed::operator!=(threed ob){
	if(x==ob.x)
		if(y==ob.y)
			if(z==ob.z)
				return 0;
	return 1;
}

int threed::operator||(threed ob){
		return (ob.x||x)&&(ob.y||y)&&(ob.z||z);
}

int threed::count = 0;

int main(){
	threed o1(10,10,10),o2(2,3,4),o3(0,0,0);
	
	cout <<"o1==o1:" << ( o1==o1) << endl;
	cout << "o1!=o1:"<< (o1!=o1) << endl;
	cout << "o1!=o2:" << (o1!=o2) << endl;
	cout << "o3||o1:" << (o3||o1) << endl;
	cout << "o3||o3:" << (o3||o3) << endl;
	return 0;
}
