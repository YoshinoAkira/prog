#include <iostream>
#include <cstdlib>
using namespace std;
#include <ctime>

class t_and_d{
	time_t systime;
	public:
	t_and_d(time_t t);
	void show();
};

t_and_d::t_and_d(time_t t){
	systime = t;
	cout << "cons\n";
}

void t_and_d::show(){
	cout << "時刻は" << ctime(&systime) << "\n";
}


int main(){
	time_t ti;
	ti = time(NULL);
	t_and_d td(ti);

	td.show();

	return 0;

}
