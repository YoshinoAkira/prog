#include <stdio.h>
struct hoge{
	unsigned a:4;
	unsigned b:4;
}tmp;
union unio{
	char ch;
	struct hoge st;
}uni;

void show_binary(char c);

int main(void){
	printf("input char:");
	scanf("%c",&uni.ch);

	printf("before ");
	show_binary(uni.ch);

	tmp.a=uni.st.a;
	uni.st.a=uni.st.b;
	uni.st.b=tmp.a;

	printf("after  ");
	show_binary(uni.ch);
	
	return 0;
}

void show_binary(char c){
	char cc = 1;
	for(;;cc<<=1){
		if(cc==0)
			break;
		if(c & cc)
			printf("1 ");
		else
			printf("0 ");
	}
	printf("\n");
}
