#include <iostream>
using namespace std;

/*
########
# .. p #
# oo   #
#      #
########
*/

void getInput();
void updateGame();
void draw();
char command;
int wall[5][8] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1 }
};

class goal{
	int x,y;
	int filled;
public:
	goal(int a, int b){ x = a; y = b; filled = 0; }
	int is_filled(){ return filled == 1 ? 1 : 0; }
	void fill(){ filled = 1; }
	int exist(int a, int b){ 
		if (a == x && b == y) return 1;
		else return 0;
	}
};

class stone{
	int x,y;
	int locked;
	char direction;
public:
	stone(int a, int b){ x = a; y = b; locked = 0; direction = '\0'; }
	int is_locked(){ return locked == 1 ? 1 : 0; }
	void lock(){ locked = 1; }
	int isgoingto_locked(){ if (wall[x][y])return 1; else return 0; }
	void set_dir(char c){ direction = c; }
	void move();											//
	int get_x(){ return x; }
	int get_y(){ return y; }
//	int isableto_move(int a, int b);						//..
	int exist(int a, int b){
		if (a == x&&b == y)return 1;
		else return 0;
	}
	int isnextto_wall();									//.
};

class player{
	int x, y;
	char direction;
public:
	player(int a, int b){ x = a; y = b; direction = '\0'; }
	void set_dir(char c){ direction = c; }
	void move();											//.
	int get_x(){ return x; }
	int get_y(){ return y; }
//	int isableto_move(int a, int b);
	int isnextto_wall();									//.
	int isnextto_stone(stone &ob);							//.
	int exist(int a, int b){
		if (a == x && b == y)return 1;
		else return 0;
	}
};

void stone::move(){
	switch (direction){
	case 'w':
		x--;
		break;

	case 'a':
		y--;
		break;

	case 's':
		y++;
		break;

	case 'z':
		x++;
		break;

	}
}

int stone::isnextto_wall(){
	switch (direction){
	case 'w':
		if (wall[x-1][y])return 1;
		else return 0;
		break;
	case 'a':
		if (wall[x][y - 1]) return 1;
		else return 0;
		break;
	case 's':
		if (wall[x][y + 1])return 1;
		else return 0;
		break;
	case 'z':
		if (wall[x + 1][y])return 1;
		else return 0;
		break;
	}
}


void player::move(){
	switch (direction){
	case 'w':
		x--;
		break;

	case 'a':
		y--;
		break;

	case 's':
		y++;
		break;

	case 'z':
		x++;
		break;

	}
}

int player::isnextto_stone(stone &ob){
	switch (direction){
	case 'w':
		if (ob.get_x()==x-1 && ob.get_y()==y)return 1;
		else return 0;
		break;
	case 'a':
		if (ob.get_x() == x && ob.get_y() == y-1) return 1;
		else return 0;
		break;
	case 's':
		if (ob.get_x() == x && ob.get_y() == y+1)return 1;
		else return 0;
		break;
	case 'z':
		if (ob.get_x() == x+1 && ob.get_y() == y)return 1;
		else return 0;
		break;
	}
}

int player::isnextto_wall(){
	switch (direction){
	case 'w':
		if (wall[x - 1][y])return 1;
		else return 0;
		break;
	case 'a':
		if (wall[x][y - 1]) return 1;
		else return 0;
		break;
	case 's':
		if (wall[x][y + 1])return 1;
		else return 0;
		break;
	case 'z':
		if (wall[x + 1][y])return 1;
		else return 0;
		break;
	}
}

goal g[2] = { goal(1, 2), goal(1, 3) };
stone st[2] = { stone(2, 2), stone(2, 3) };
player pl(1, 5);

int countt = 0;
int main(){
	draw();
	while (true){
		getInput();
		cout << command << "\n";
		updateGame();
		draw();
		cout << countt << endl;
		cout << "\n";
	}
	return 0;
}

void getInput(){
	cout << "w:up, a:left, s:right, z:down\n";
	cin >> command;
}

void updateGame(){
	pl.set_dir(command);
	if (pl.isnextto_stone(st[0])){ 
		if (st[0].is_locked()){
			;
		}
		else{
			st[0].set_dir(command);
			if (st[0].isnextto_wall());
			else 
			{
				st[0].move();
				pl.move();
				if (st[0].isgoingto_locked()){
					st[0].lock();
				}
			}
		}
	}
	else if(pl.isnextto_stone(st[1])){
		if (st[1].is_locked()){
			;
		}
		else{
			st[1].set_dir(command);
			if (st[1].isnextto_wall());
			else
			{
				st[1].move();
				pl.move();
				if (st[1].isgoingto_locked()) st[1].lock();
			}
		}
	}
	else if(pl.isnextto_wall()){
		;
	}
	else{
		pl.move();
	}
}

void draw(){
	int flag = 0;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 8; j++){
			
			if (wall[i][j])cout << '#';
			else if (pl.exist(i, j)){
				cout << 'P';
			}
			else{
				for (int k = 0; k < 2; k++){
					if (g[k].exist(i, j)){
						if (g[k].is_filled()){
							cout << '0';
							flag = 1;
							continue;
						}
						else{
							cout << '.';
							flag = 1;
							continue;
						}
					}
				}
				if (!flag){
					for (int k = 0; k < 2; k++){
						if (st[k].exist(i, j)){
							cout << 'o';
							flag = 1;
							continue;
						}
					}
				}
				if (!flag)
					cout << ' ';
			}


			countt++;
			flag = 0;
		}//forj
		cout << "\n";
	}//fori
}
