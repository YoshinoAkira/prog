#include <time.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void sleep(int num);
void sleep(char *num);
void test(int num);
int main(){
	clock_t before,after;
	before = clock();
//	sleep(10);
	after = clock();
	cout << "かかった時間（１）"<< (after-before)/CLOCKS_PER_SEC << "\n";
	
	before = clock();
//	sleep((char *)"10");
	test(1000);
	after = clock();
	cout << "かかった時間（２）"<<(after-before)/CLOCKS_PER_SEC << "\n";
	cout << "cps=" << CLOCKS_PER_SEC << "\n";
	
	return 0;
}

void test(int num){
	long i,k=0;
	for(; num;num--){
		for(i=0;i<CLOCKS_PER_SEC;i++)
			k++;
	}
}

void sleep(int num){
	clock_t start,now=0;
	for(;num;num--)
		start=clock();
		cout << "start:" << start << "\n";
		while(1){
			now = clock();
			cout << "now:"<< now;
			cout << "dif:" << start - now;
			if((start-now) >=CLOCKS_PER_SEC)
				break;
		}
}

void sleep(char *num){
	int count = atoi(num);
	clock_t start,now=0;
	for(;count;count--)
		start=clock();
		cout << "start:" << start << "\n";
		while(start - now == CLOCKS_PER_SEC){
			now=clock();
			cout << "now:" << now ;
		}
}
