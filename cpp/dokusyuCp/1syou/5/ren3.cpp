#include <iostream>
using namespace std;

#define MAX 100
#define DEBUG 1
class queue{
	int que[MAX];
	int top;
	int end;
	public:
	void init();
	void en(int num);
	int de();
	void show();
};

void queue::init(){
	top=0;
	end=0;
}

void queue::en(int num){
	if(end==MAX){
		cout << "queueはいっぱいです。\n";
		return;
	}
	que[end]=num;
	end++;
#ifdef DEBUG
	cout << "enqueue("<< end-1 <<"):" << num << "\n";
	
#endif
}

int queue::de(){
	int tmp;
	if(top==0){
		cout << "queueは空です。\n";
		return 0;
	}
	tmp = que[top];
	top++;
#ifdef DEBUG
	cout << "dequeue("<< top-1 <<":" << tmp << "\n";
#endif
	return tmp;
}

void queue::show(){
	int i;
	for(i=top;i<end;i++){
		cout << que[i] << ", ";
	}
	cout << "\n";
}


int main(){
	queue q1,q2;
	q1.init();
	q2.init();
	q1.en(3);
	q1.en(3);
	q1.en(4);

	q2.en(117);
	q2.en(117);
	q2.en(115);
	
	cout << "q1 showtime\n";
	q1.show();
	
	cout << "q2 showtime\n";
	q2.show();
	
	cout << q2.de();
	
	cout << "q2 showtime\n";
	q2.show();


	return 0;
}
