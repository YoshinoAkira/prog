#include <iostream>
using namespace std;

#define SIZE 100
class q_type{
 	int	queue[SIZE];
	int head,tail,num;
	public:
	q_type();
	~q_type();
	void show();
	void q(int n);
	int deq();
};

q_type::q_type(){
	cout << "コンストラクタ\n";
	head=tail=num=0;
}

q_type::~q_type(){
	cout << "デストラクタ\n";
}

void q_type::show(){
 if(head<=tail){//普通
	for(int i=head;i<=tail;i++){
		cout << queue[i] << " ";
	}
 }else{
	 for(int i=tail;i<=SIZE;i++){
		 cout << queue[i] << " ";
	 }
	 for(int i=0;i<=head; i++){
		 cout << queue[i] << " ";
	 }
 }
 cout << "\n";
}

void q_type::q(int n){
	if(num==SIZE){
		cout << "キューはいっぱいです。\n";
		return;
	}
	tail++;
	queue[tail]=n;
	if(num==0) head++;
	num++;
	
}

int q_type::deq(){
	if(num==0){
		cout  << "キューは空です。\n";
		return 0;
	}
	int ret=queue[head];
	if(head+1==SIZE){
		head=0;
	}else{
		head++;
	}
	num--;

	return ret;
}

int main(){
	q_type q1,q2;
	q1.q(1);
	q1.q(5);
	q1.show();
	q2.show();
	q2.deq();
	cout << q1.deq() << "\n";
	cout << q1.deq() << "\n";
	cout << q1.deq() << "\n";
	cout << q1.deq() << "\n";
	return 0;
}


