#include <iostream>
using namespace std;

int min(int a, int b);
char min(char a,char b);
double min(double a, double b);

int main(){
	cout << min(5,4) << "\n";
	cout << min('a','b') << "\n";
	cout << min(100.3,320.434) <<"\n";
}

int min(int a, int b){
	cout << "整数比較:";
	return a < b ? a:b;
}

char min(char a, char b){
	cout << "文字比較:";
	return a < b ? a:b;
}

double min(double a, double b){
	cout <<"倍精度浮動小数点数比較:";
	return a < b ? a : b;
}
