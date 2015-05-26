#include <SDL/SDL.h>


int main(){
	SDL_Surface *image, *image2;
	SDL_Rect rect, scr_rect;

	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);

	image = SDL_LoadBMP("sample.bmp");

	/*change white into transparent color*/
	SDL_SetColorKey(image, SDL_SRCCOLORKEY, SDL_MapRGB(image->format,255,255,255));
	image2 = SDL_DisplayFormat(image);
	
	rect.x = 0;
	rect.y = 0;
	rect.w = image2->w;
	rect.h = image2->h;

	scr_rect.x = 0;
	scr_rect.y = 0;

	SDL_BlitSurface(image2, &rect, SDL_GetVideoSurface(), &scr_rect);

	SDL_Flip(SDL_GetVideoSurface());

	SDL_Delay(5000);


	SDL_FreeSurface(image2);
	SDL_FreeSurface(image);

	SDL_Quit();
	return 0;
}
