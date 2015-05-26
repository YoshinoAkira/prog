#include <iostream>
using namespace std;

int minof(int [], int);

int main(){
	const int size = 10;
	int a[size] = {3,9,5,3213,7,8,6,6,2,32};
	int min = minof(a,size);
	cout << min << endl;
	cout << a << endl;
	return 0;
}

int minof(int x[], int n){
	int min = x[0];
	cout << x << endl;
	for(int i=1;i<n;i++){
		if(x[i] < min) min = x[i];
	}
	return min;

}
