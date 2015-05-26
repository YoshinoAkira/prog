#include <iostream>
using namespace std;
//08031732434			
int main(){
	int x[2][3] = {{1,2,3},{4,5,6}};
	int y[3][2] = {{1,5},{5,3},{8,1}};

	int z[2][2] = {0};
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<3;k++){
				z[j][i] += x[j][k] * y[k][i];
			}
		}
	}

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << z[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
