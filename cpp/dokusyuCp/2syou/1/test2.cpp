#include <iostream>
using namespace std;

int main(){
	int i=5;

	if(i==5){
#define TEST 10
		cout << "testは10\n";
	}else{
		cout << "testは10じゃない\n";
#undef TEST
#define TEST 20

	}
	
	if(TEST==10){
		cout <<"TESTは10だよ\n";
	}else if(TEST==20){
		cout <<"testは20だよ\n";
	}else{
		cout << "testは10でも20でもないよ\n";
	}

	return 0;
	

}
