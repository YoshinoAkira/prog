#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc,char *argv[]){
	FILE *fp=fopen(argv[1],"r");
	
	char ch;
	while((ch=fgetc(fp))!=EOF){
		cout << ch;
		if(ch==EOF){
			cout << endl;
			cout << "EOF検出\n";
		}
	}
	cout << endl;
	fclose(fp);

	return 0;
}
