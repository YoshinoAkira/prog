#include <iostream>
using namespace std;

class test{
	int i;
	public:
	test();
	~test();
	void show();
};

void test::show(){
	cout << i << "\n";
}

test::test(){
	i=10;
	cout << "コンストラクタ呼び出し中\n";
	for(int i = 0;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<CLOCKS_PER_SEC;k++)
				i++;
		}
		cout << ".";
	}
	cout << "\n";
	cout << "コンストラクタ呼び出し終了\n";
}

test::~test(){
	cout << "デストラクタ呼び出し中\n";
	for(int i = 0;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<CLOCKS_PER_SEC;k++)
				i++;
		}
		cout << ".";
	}
	cout << "\n";
	cout << "デストラクタ呼び出し終了\n";	
}


int main(){
	test t1,t2;
	t1.show();
	t2.show();

	return 0;
}
