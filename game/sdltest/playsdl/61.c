#include <SDL/SDL.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480
#define BPP 32


int draw(SDL_Surface *image, SDL_Rect *rect1, SDL_Rect *rect2);

int main(){
	SDL_Surface *image;
	SDL_Rect rect, scr_rect, rect_tmp;
	SDL_Event event;
	int exit_prg = 0;

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_SetVideoMode(WINDOW_WIDTH,WINDOW_HEIGHT,BPP,SDL_HWSURFACE);


	image = SDL_LoadBMP("stretch.bmp");

	rect.x = 0;
	rect.y = 0;
	rect.w = image->w;
	rect.h = image->h;

	scr_rect.x = 0;

	scr_rect.y = 0;
	draw(image, &rect,&scr_rect);

	rect_tmp = scr_rect;

	while(exit_prg == 0){
		if(SDL_PollEvent(&event)){
			switch(event.type){
				case SDL_KEYDOWN:
					switch(event.key.keysym.sym){
						case SDLK_UP:
							rect_tmp.y -= rect.h;
							break;
						case SDLK_DOWN:
							rect_tmp.y += rect.h;
							break;
						case SDLK_RIGHT:
							rect_tmp.x += rect.w;
							break;
						case SDLK_LEFT:
							rect_tmp.x -= rect.w;
							break;
						case SDLK_ESCAPE:
							exit_prg = 1;
						default:
							break;
					}

					if(rect_tmp.x >= 0 && rect_tmp.x + rect.w <= WINDOW_WIDTH && rect_tmp.y >= 0 && rect_tmp.y + rect.h <= WINDOW_HEIGHT){
						scr_rect = rect_tmp;
						draw(image, &rect, &scr_rect);
					}
					else{
						rect_tmp = scr_rect;
					}
					break;
				default:
					break;
			}
		}
		SDL_Delay(1);
	}
	SDL_FreeSurface(image);

	SDL_Quit();

	return 0;
}


int draw(SDL_Surface *image, SDL_Rect *rect1, SDL_Rect *rect2){
	SDL_Rect window_rect = {0,0,WINDOW_WIDTH,WINDOW_HEIGHT};
	SDL_Surface *video_surface;

	video_surface = SDL_GetVideoSurface();

	SDL_FillRect(video_surface, &window_rect, SDL_MapRGB(video_surface->format,100,0,0));

	SDL_BlitSurface(image, rect1, video_surface, rect2);

	SDL_Flip(video_surface);
}
