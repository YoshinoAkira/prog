#include "SDL.h"

int main(){
	printf("SDLの初期化をしています\n");
	
	if((SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO)==-1)){
		printf("SDLの初期化ができませんでした。: %s.\n",SDL_GetError());
		exit(-1);
	}

	printf("SDLの初期化が完了しました。\n");
	
	SDL_Quit();

	printf("終了します\n");

	return 0;
}
