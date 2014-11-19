#include <iostream>
#include <cstdlib>
using namespace std;

long mystrtol(const char *start, char **end,int base=10){
	return 	strtol(start,end,base);
}

int main(){
	char c[100]="It is the most beautiful scene that I have ever seen.";
	char *str[]={
		"scene","most","have"
	};
	cout << mystrtol(c,str) << endl;

	return 0;
}
