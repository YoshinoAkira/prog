#include <iostream>
using namespace std;
#include <ctime>
#include <cstdio>

class date{
	int day,month,year;
	public:
	date(char *str);
	date(time_t t);
	date(int m,int d,int y){
		day=d;
		month =m;
		year = y;
	}

	void show(){
		cout << month << '/' << day << '/' << year << "\n";
	}
};

date::date(char *str){
	sscanf(str,"%d%*c%d%*c%d",&month,&day,&year);
}

date::date(time_t t){
	struct tm *local;
	local = localtime(&t);
	day = local->tm_mday;
	month = local->tm_mon+1;
	year = local->tm_year +1900;
}

int main(){
	date sdate("12/31/99");
	date idate(12,31,99);
	date tdate(time(NULL));

	sdate.show();
	idate.show();
	tdate.show();


	return 0;
}
