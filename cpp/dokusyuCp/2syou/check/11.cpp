#include <iostream>
using namespace std;

class line{
	int len;
	public:
	line(int l);
	void draw();
};

line::line(int l){
	len = l;
}

void line::draw(){
	for(int i=0;i<len;i++){
		cout << "*";
	}
	cout << "\n";
}

int main(){
	line l1(10),l2(212);
	l1.draw(),l2.draw();

	return 0;
}
