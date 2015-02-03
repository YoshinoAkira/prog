#include <iostream>
#include <math.h>
using namespace std;

int sroot(int num);
long sroot(long num);
double sroot(double num);

int main(){
	cout << "1000の平方根は" << sroot(1000) << "です\n";
	cout << "33.4の平方根は" << sroot(33.4) << "です\n";
	cout << "100000の平方根は" <<  sroot(100000) << "です\n";

	return 0;
}

int sroot(int num){
	return sqrt(num);
}

long sroot(long num){
	return sqrt(num);
}

double sroot(double num){
	return sqrt(num);
}
