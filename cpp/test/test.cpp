#include <iostream>
using namespace std;


int main(){
	int a=3;
	if(a==4){
		cout << "#define HOGE 3" << endl;
#define HOGE 3
	}else{
		cout << "#define HOGE 4" <<endl;
#define HOGE 4
	}

	if(HOGE==4){
		cout << "hoge is 4" << endl;
	}else if(HOGE==3){
		cout << "hoge is 3" << endl ;
	}else{
		cout << "else" << endl;
	}


	return 0;
}
