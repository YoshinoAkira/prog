#include <iostream>
using namespace std;
#define HEIGHT 5
#define WIDTH 8

const char stage[]="
#######
"

int stoneNum = 2;
int goalNum = 2;
char command;
enum Object{
	none,
	sharp, //1
	goal, //2
	stone, //3
	stoneOnGoal, //4
	player,//5
	playerOnGoal//6
};

int count = 0;
void init(Object *map);

int main(){
	Object *map=new Object[HEIGHT*WIDTH];
//	init();
	while(true){
		draw();
		cout << "w:up a:left s:right z:down\n"; 
		cin >> command;
	}

	return 0;
}

void init(Object *map){
	for(int i=0;i<HEIGHT*WIDTH;i++){
		switch()
	}
}

void draw(){
	for(int i=0;i<HEIGHT;i++){
		for(int j=0;j<WIDTH;j++){
			switch(map[i*WIDTH+j]){
				case 0:
					cout << ' ';
					break;
				case 1:
					cout << '#';
					break;
				case 2:
					cout << 'o';
					break;
				case 3:
					cout << '.';
					break;
				case 4:
					cout << '0';
					break;
				case 5:
					cout << 'P';
					break;
			}//switch
		}//for j
		cout << "\n";
	}//for i
}
