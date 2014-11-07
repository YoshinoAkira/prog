#include <iostream>
using namespace std;

class a_type{
	double a,b;
	public:
	a_type(double x,double y){
		a=x;
		b=y;
	}
	void show(){cout << a << ' ' << b << "\n";}
};

int main(){
	a_type ob[2][5] = {
		a_type(1,1),a_type(2,2),
		a_type(3,3),a_type(4,4),
		a_type(5,5),a_type(6,6),
		a_type(7,7),a_type(8,8),
		a_type(9,9),a_type(10,10)
	};

	int i,j;
	for(i=0;i<2;i++)
		for(j=0;j<5;j++){
			ob[i][j].show();
		}

	cout << "\n";
	

	return 0;
}
