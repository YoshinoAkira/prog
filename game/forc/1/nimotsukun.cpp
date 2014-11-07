#include <iostream>
using namespace std;

#define WALL 1
#define SPACE 0
#define PLAYER 2
#define GOAL 3
#define BLOCK 4
#define BoG 5
#define PoG 6
#define HEIGHT 5
#define WIDTH 8

int map[HEIGHT][WIDTH]={
	{1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1}
};



void init();
void draw();
void getcom();
void update();

char command;
class Player{
	public:
	int x,y;
	Player(int a, int b){y=a,x=b;}
};

Player pl(1,5);

int main(){
	init();
	while(true){
		draw();
		getcom();
		update();
	}
	return 0;
}

void init(){
	map[1][2]=map[1][3]=GOAL;
	map[2][2]=map[2][3]=BLOCK;
	map[pl.y][pl.x]=PLAYER;
	
}


void draw(){
	for(int i=0;i<HEIGHT;i++){
		for(int j=0;j<WIDTH;j++)	{
			switch(map[i][j]){
				case WALL: cout << '#'; break;
				case SPACE: cout << ' '; break;
				case PLAYER: cout << 'P'; break;
				case PoG: cout << 'P';break;
				case GOAL: cout << '.'; break;
				case BLOCK: cout << 'o'; break;
				case BoG: cout << '0'; break;
			}
		}//for j
		cout << "\n";
	}//for i
}

void getcom(){
	cout << "w:up  a:left  s:right  z:down\n";
	cin >> command;
}

void update(){
	int xne=pl.x,yne=pl.y;
	switch(command){
		case 'w':yne--;break;
		case 'a':xne--;break;
		case 's':xne++;break;
		case 'z':yne++;break;
	}

	//移動できない場合
	if(map[yne][xne]==WALL || map[yne][xne]==GOAL || map[yne][xne]==BoG)return;
	if(map[yne][xne]==SPACE){//
		map[pl.y][pl.x]=SPACE;
		pl.x=xne;
		pl.y=yne;
		map[pl.y][pl.x]=PLAYER;
		return;
	}
/*	if(map[yne][xne]==GOAL){
		map[pl.y][pl.x]=SPACE;
		pl.x=xne;
		pl.y=yne;
		map[pl.y][pl.x]=
		*/
	if(map[yne][xne]==BLOCK){
		int xs=xne,ys=yne;
		switch(command){
			case 'w':ys--;break;
			case 'a':xs--;break;
			case 's':xs++;break;
			case 'z':ys++;break;
		}
		if(map[ys][xs]==SPACE || map[ys][xs]==GOAL){//動かせる
			map[pl.y][pl.x]=SPACE;
			pl.x=xne;
			pl.y=yne;
			map[pl.y][pl.x]=PLAYER;
			if(map[ys][xs]==GOAL){
				map[ys][xs]=BoG;
				return;
			}else{
				map[ys][xs]=BLOCK;
				return;
			}
		}else return; //動かせない}
	}//石アリ
}
