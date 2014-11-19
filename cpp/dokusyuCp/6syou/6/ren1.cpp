#include <iostream>
#include <cstdlib>
using namespace std;


class dynarray{
	int *p;
	int size;
	public:
		dynarray(int s);
		int &put(int i);
		int get(int i);
		dynarray &operator=(dynarray &ob);
};

dynarray::dynarray(int s){
	cout << "コンストラクタ\n";
	size = s;
	p = new int [size];
}

int &dynarray::put(int i){
	if(size<=i){
		cout << "error:\n";
		exit(1);
	}
	return p[i];
}

int dynarray::get(int i){
	if(size<=i){
		cout << "error:\n";
		exit(1);
	}
	return p[i];
}

dynarray &dynarray::operator=(dynarray &ob){
	if(size<ob.size){
		delete [] p;
		p = new int [ob.size];
	}
	size = ob.size;
	for(int i=0;i<size;i++){
		p[i]=ob.p[i];
	}
	return *this;
}
