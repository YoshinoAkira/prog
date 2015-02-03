#include <iostream>
using namespace std;


class building{
	int floor, room, area;
	public:
	building(int a=1,int b=3,int c=60){
		floor = a;
		room = b;
		area = c;
	}
	void showbuilding(){
		cout << "階数: " << floor << endl ;
		cout << "部屋数: " << room << endl;
		cout << "面積: " << area << endl;
	}
	
};

class house : public building{
	int bedroom, bathroom;
	public:
	house(int a=1, int b=1,int c=1,int d=3,int e=60):building(c,d,e){
		bedroom = a;
		bathroom = b;
	}
	void showhouse(){
		showbuilding();
		cout << "寝室数" << bedroom << endl;
		cout << "浴室数 " << bathroom << endl;
	}
};

class office : public building {
	int extinguisher, phone;
	public:
	office(int a=1, int b=1,int c=1,int d=3,int e=60):building(c,d,e){
		extinguisher = a;
		phone = b;
	}
	void showoffice(){
		showbuilding();
		cout << "消火器の数: " << extinguisher << endl;
		cout << "浴室数: " << phone	 << endl;
	}
};


int main(){
	

	return 0;
}
