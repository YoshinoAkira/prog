#include <iostream>
using namespace std;

void date(char *date);
void date(int month,int day,int year);

int main(){
	date((char *)"8/23/99");
	date(8,23,99);
	return 0;
}

void date(char *date){
	cout << "日付: " << date << "\n";
}

void date(int month, int day, int year){
	cout << "日付: " << month << "/" ;
	cout << day << "/" << year << "\n";
}

