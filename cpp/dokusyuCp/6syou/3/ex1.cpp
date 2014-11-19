#include <iostream>
using namespace std;



class coord{
	int x,y;
	public:
	coord(int i=0,int j=0){x=i;y=j;}
	void getxy(int &i,int &j){i=x;j=y;}
	int operator==(coord ob2);
	int operator&&(coord ob2);
};

int coord::operator==(coord ob2){
	return x==ob2.x && y==ob2.y;
}

int coord::operator&&(coord ob2){
	return (x && ob2.x)&&(y && ob2.y);
}


int main(){
	coord o1(10,10),o2(5,3),o3(10,10),o4(0,0);
	if(o1==o2) cout << "o1とo2は同じ\n";
	else cout << "o1とo2は異なる\n";

	if(o1==o3)cout << "o1とo3は同じ\n";
	else cout << "o1とo3は異なる\n";

	if(o1&&o2) cout << "o1 && o2 は真\n";
	else cout << "o1 && o2 は偽\n";

	cout << "o1 && o4 は";
	if(o1&&o4) cout << "真\n";
	else cout << "偽\n";

	return 0;
}
