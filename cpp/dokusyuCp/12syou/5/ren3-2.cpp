#include <iostream>
using namespace std;

#define SIZE 100

class q_type{
	int queue[SIZE];
	int head, tail,kosu;
	public:
	void init();
	void q(int num);
	int deq();
	void showall();
	int ret_dir(int num);
	int ret_head();
	int ret_tail();
};

void q_type::init(){
	head=tail=kosu=0;
}

void q_type::q(int num){
	if(tail+1 == head || (tail+1 == SIZE && !head)){
		cout << "キューはいっぱいです。\n";
		return;
	}
	tail++;
	if(tail==SIZE) tail=0;
	queue[tail] = num;
}

int q_type::deq(){
	if(head==tail){
		cout << "キューは空です\n";
		return 0;
	}
	head++;
	if(head==SIZE) head = 0;
	return queue[head];
}

void q_type::showall(){
	cout << "yet\n";
}

int q_type::ret_dir(int num){
	return queue[num];
}

int q_type::ret_head(){
	return queue[head];
}

int q_type::ret_tail(){
	return queue[tail];
}

int main(){
	char ch;
	int num;
	q_type q1,q2;
	q1.init();
	q2.init();

	while(true){
		cout << "input key:(e/d/R/h/t/q)";
		cin >> ch;
		switch(ch){
			case 'e': //enqueue
				cout << "入れたい数字は?:";
				cin >> num;
				q1.q(num);
				break;
			case 'd'://dequeue
				cout << "dequeue:" <<q1.deq() << "\n" ;
				break;
			case 'R': //指定箇所
				cout << "知りたい場所は?:";
				cin >> num;
				cout << q1.ret_dir(num) << "です。\n";
				break;
			case 'h'://ヘッド
				cout <<"head:" << q1.ret_head()<< "\n";
				break;
			case 't'://テール
				cout << "tail:" << q1.ret_tail() <<"\n";
				break;
			case 'q':
				return 0;
		}
	}

	return 0;
}
