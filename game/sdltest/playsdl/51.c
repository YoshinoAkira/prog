#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

int main(){
	SDL_Surface *image;
	SDL_Rect rect, scr_rect;
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);

	image = IMG_Load("kuroneko20.jpg");

	rect.x = 0;
	rect.y = 0;
	rect.w = 640;
	rect.h = 480;


	scr_rect.x = 0;
	scr_rect.y = 0;


	SDL_BlitSurface(image, &rect, SDL_GetVideoSurface(), &scr_rect);

	SDL_Flip(SDL_GetVideoSurface());

	SDL_Delay(3000);

	SDL_FreeSurface(image);
	SDL_Quit();
	return 0;
}
