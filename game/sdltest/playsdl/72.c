#include <SDL/SDL.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480
#define BPP 32
#define CHAR_WIDTH 32
#define CHAR_HEIGHT 32
#define __WIDTH WINDOW_WIDTH / CHAR_WIDTH
#define __HEIGHT WINDOW_HEIGHT / CHAR_HEIGHT

char ObjectMatrix[__HEIGHT][__WIDTH];

int getpos(SDL_Rect *from, SDL_Rect *to){
	to->x = from->x * CHAR_WIDTH;
	to->y = from->y * CHAR_HEIGHT;
	return 0;
} 

//imageは描画したい画像、rect1は描画する画像の範囲、rect2は描画先の座標
int draw(SDL_Surface *image, SDL_Rect *rect1, SDL_Rect *rect2){
	SDL_Rect window_rect = {0,0,WINDOW_WIDTH, WINDOW_HEIGHT};
	SDL_Surface *video_surface;
	SDL_Rect rect3;

	getpos(rect2, &rect3);

	video_surface = SDL_GetVideoSurface();

	SDL_FillRect(video_surface, &window_rect, SDL_MapRGB(video_surface->format, 0,0,0));

	SDL_BlitSurface(image, rect1,video_surface, &rect3);

	SDL_Flip(video_surface);

	return 0;
}

int main(){
	SDL_Surface* image;
	SDL_Rect rect, scr_rect, rect_tmp;
	SDL_Event event;
	int exit_prg = 0;

	memset(ObjectMatrix, 0x00, sizeof(ObjectMatrix));
	ObjectMatrix[1][1]=1;

	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_SetVideoMode(WINDOW_WIDTH, WINDOW_HEIGHT, BPP, SDL_HWSURFACE);

	image = SDL_LoadBMP("stretch32.bmp");

	rect.x = 0;
	rect.y = 0;
	rect.w = image->w < CHAR_WIDTH ? image->w : CHAR_WIDTH;
	rect.h = image->h < CHAR_HEIGHT ? image->h : CHAR_HEIGHT;

	scr_rect.x = 0;
	scr_rect.y = 0;

	draw(image, &rect, &scr_rect);

	rect_tmp = scr_rect;

	while(exit_prg == 0){
		if(SDL_PollEvent(&event)){
			switch(event.type){
				case SDL_KEYDOWN:
					switch(event.key.keysym.sym){
						case SDLK_UP:
							rect_tmp.y -= 1;
							break;
						case SDLK_DOWN:
							rect_tmp.y += 1;
							break;
						case SDLK_RIGHT:
							rect_tmp.x += 1;
							break;
						case SDLK_LEFT:
							rect_tmp.x -= 1;
							break;
						case SDLK_ESCAPE:
							exit_prg = 1;
							break;
						default:
							break;
					}
					if(rect_tmp.x >= 0 && rect_tmp.x < __WIDTH && rect_tmp.y >= 0 && rect_tmp.y < __HEIGHT && ObjectMatrix[rect_tmp.y][rect_tmp.x] == 0){
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
