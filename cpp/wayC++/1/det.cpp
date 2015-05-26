#include <iostream>
using namespace std;

const int row = 3;
const int col = 3;
void printDet(int tlist[row][col]);
void printList(int tlist[row][col]);

int main(){
	int list[row][col];
	int k=1;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			list[i][j] = k;
			k++;
		}
	}
	list[row-1][col-1]=10;
	cout << "初期化終わり\n\n";
	printList(list);
	printDet(list);


	return 0;
}

void printDet(int tlist[row][col]){

}

void printList(int tlist[row][col]){
	cout << "printList::\n";
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout << tlist[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
