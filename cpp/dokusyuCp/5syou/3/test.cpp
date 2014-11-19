#//inlineの試し→ ダメ
//参照渡しでコンストラクタ、デストラクタが開かれるか
//show2のデストラクタのみ起きる
#include <iostream>
using namespace std;

class sample{
	public:
		sample(){x=10;cout << "const\n";}
		sample(int n){x=n;cout << "const\n";}
		~sample(){cout << "dest\n";}
		void show(){cout << "show: " << x << endl;}
		void setx(int n){x=n;}
		int getx(){return x;}
	private:
		int x;
};



void show1(sample &sam){
	cout << "show: " <<sam.getx() << endl;
}

//このときだけデストラクタのみ開かれる。コンストラクタはない。
void show2(sample sam){
	cout << "show2: "<<sam.getx() << endl;
}

void show3(sample *sam){
	cout << "show3: " <<sam->getx()<< endl;
}

int main(){
	sample s1,s2(5);
	show1(s1);
	show1(s2);
	show2(s1);
	show2(s2);
	show3(&s1);
	show3(&s2);
	s1.show();
	s2.show();

// ダメ
//	void show4(){
//		cout << 100 << endl;
//	}
	return 0;
}
