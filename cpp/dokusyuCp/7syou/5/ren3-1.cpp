#include <iostream>
using namespace std;

#define DEBUG
#define SIZE 100

class queue{
	int que[SIZE];
	int head,tail,num;
	public:
	void init();
	void enq(int num);
	int deq();
	void show();
};

void queue::init(){
	head=0;
	tail=0;
	num=0;
}

void queue::enq(int num){
	if(num==SIZE){
		cout << "キューはもういっぱいです。\n";
		return;
	}
	if(num==0){
		que[tail]=num;
		num++;
	}else{
		if(tail+1==SIZE){
			for(int i=head;i<SIZE;i++){
				if(que)
			}
		}
	}

}

int queue::deq(){
	return;
}

void queue::show(){

}

int main(){


	return 0;
}
