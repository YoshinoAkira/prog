#include <stdio.h>
#include <stdlib.h>

int __libc_start_main(){
	printf("Before main()\n");
	exit(0);
}


int main(){
	printf("HelloWorld\n");
	return 0;

	return 0;
}
