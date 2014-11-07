#include <iostream>
using namespace std;

class truck;

class car{
	int passengers;
	int speed;
	public:
	car(int p,int s){passengers = p; speed =s ;}
	friend int sp_greater(car c, truck t);
};

class truck{
	int weight;
	int speed;
	public:
	truck(int w,int s){weight = w; speed = s;}
	friend int sp_greater(car c,truck t);
};

int sp_greater(car c,truck t){
	return c.speed - t.speed;
}

int main(){
	int t;
	car c1(6,55), c2(2,120);
	truck t1(10000,55), t2(20000,72);

	cout << "c1とt1を比較:\n";
	t = sp_greater(c1,t1);
	if(t<0)cout << "トラックが早い";
	else if(t==0)cout << "速度は同じ";
	else cout << "車が早い\n";

	cout << "c2とt2を比較:\n";
	t = sp_greater(c2,t2);
	if(t<0)cout << "トラックが早い";
	else if(t==0)cout << "速度は同じ";
	else cout << "車が早い\n";

	return 0;
}
