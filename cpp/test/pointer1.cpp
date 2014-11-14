#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int *i,ii;
	double *d,dd;
	char *c,cc;
	ii=5;
	dd=10.4;
	cc='a';

	printf("sizeof i:%ld\n",sizeof(i));
	printf("sizeof d:%ld\n",sizeof(d));
	printf("sizeof c:%ld\n",sizeof(c));
	printf("sizeof *i:%ld\n",sizeof(*i));
	printf("sizeof *d:%ld\n",sizeof(*d));
	printf("sizeof *c:%ld\n",sizeof(*c));
	return 0;
}
