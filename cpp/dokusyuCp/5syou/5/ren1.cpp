#include <iostream>
using namespace std;

int dif(int a,int b){
	return a-b;
}

float dif(float a,float b){
	return a-b;
}


int main(){
	int (*fp1)(int,int)=dif;
	float (*fp2)(float,float)=dif;


	int d1=334,d2=114;
	float f1=104.3,f2=4323.33;

	cout<< fp1(d1,d2) << endl;
	cout<< fp2(f1,f2) << endl;

	return 0;
}
