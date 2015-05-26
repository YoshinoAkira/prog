#include <SDL/SDL.h>

int main(){
	SDL_Init(SDL_INIT_EVERYTHING);
	
	SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);

	SDL_Delay(3000);
	SDL_WM_ToggleFullScreen(SDL_GetVideoSurface());

	SDL_Delay(3000);

	SDL_WM_ToggleFullScreen(SDL_GetVideoSurface());

	SDL_Delay(3000);

	SDL_Quit();

	return 0;int SDL_EnableKeyRepeat(int delay, int interval);
}
