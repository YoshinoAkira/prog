#include <SDL/SDL.h>

int main(){
	SDL_Surface* image, *hiruma;
	SDL_Rect rect, scr_rect;

	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_SetVideoMode(640, 480, 32 ,SDL_HWSURFACE);

	image = SDL_LoadBMP("sample.bmp");
	hiruma = SDL_LoadBMP("hiruma.bmp");
	rect.x = 0;
	rect.y = 0;
	rect.w = 200;
	rect.h = 200;

	scr_rect.x = 0;
	scr_rect.y = 0;
	
	SDL_BlitSurface(image, &rect, hiruma, &scr_rect);
	rect.w = hiruma->w;
	rect.h = hiruma->h;
	
	SDL_BlitSurface(hiruma, &rect , SDL_GetVideoSurface(), &scr_rect);

	SDL_Flip(SDL_GetVideoSurface());

	SDL_Delay(5000);

	SDL_FreeSurface(image);

	SDL_Quit();

	return 0;
}
