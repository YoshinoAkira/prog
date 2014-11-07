#include <iostream>
using namespace std;

class ftoi{
	int feet,inch;
	public:
	ftoi(int f){
		feet = f;
		inch = 12*f;
	
	cout << "inchにすると、" << inch << "\n";
	}
};

int main(){
	ftoi f1(10);
	return 0;
}
