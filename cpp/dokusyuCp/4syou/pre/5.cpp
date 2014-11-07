#include <iostream>
using namespace std;

class summation{
	int num;
	long sum;
	public:
	void set_sum(int n);
	void show_sum(){
		cout << num << " 総計は " << sum << "\n";
	}
};

void summation::set_sum(int n){
	int i;
	num =  n;
	sum = 0;
	for(i=0;i<=n;i++){
		sum+=i;
	}
}

summation make_sum(){
	int k;
	cout << "input num:";
	cin >> k;
	summation tmp;
	tmp.set_sum(k);
	return tmp;
}

int main(){
	summation s1,s2;
	s1=make_sum();
	s2=make_sum();

	s1.show_sum();
	s2.show_sum();
	return 0;
}
