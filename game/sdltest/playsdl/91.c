#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480
#define BPP 32
#define CHAR_WIDTH 32
#define CHAR_HEIGHT 32
#define __WIDTH WINDOW_WIDTH / CHAR_WIDTH //20
#define __HEIGHT WINDOW_HEIGHT / CHAR_HEIGHT //15

#define FONT_NAME "fonts-japanese-gothic.ttf"
#define FONT_SIZE 24
#define MESSAGE_LEFT 0
#define MESSAGE_TOP 400

TTF_Font *font;
const SDL_Color white = {0xff, 0xff, 0xff};

char ObjectMatrix[__HEIGHT][__WIDTH];

int getpos(SDL_Rect *from, SDL_Rect *to){
	to->x = from->x * CHAR_WIDTH;
	to->y = from->y * CHAR_HEIGHT;
	return 0;
}

int display(SDL_Surface *image, SDL_Rect *src_rect, SDL_Rect *dst_rect){
	SDL_Surface *video_surface = SDL_GetVideoSurface();

	SDL_BlitSurface(image, src_rect, video_surface, dst_rect);

	SDL_Flip(video_surface);

	return 0;
}

int draw(SDL_Surface *image, SDL_Rect *rect1, SDL_Rect *rect2){
	SDL_Rect window_rect = {0, 0, WINDOW_WIDTH, WINDOW_HEIGHT};
	SDL_Surface *video_surface;
	SDL_Rect rect3;

	getpos(rect2, &rect3);

	video_surface = SDL_GetVideoSurface();

	SDL_FillRect(video_surface, &window_rect, SDL_MapRGB(video_surface->format,60, 60, 60));

	display(image, rect1, &rect3);

	return 0;
}

int show_message(const char* msg){
	SDL_Surface *message_text;
	SDL_Rect rect, scr_rect, rect_tmp;
	SDL_Event event;
	int close_msg = 0;

	message_text = TTF_RenderUTF8_Blended(font, msg, white);

	SDL_EnableKeyRepeat(0,0);

	rect.x = 0;
	rect.y = 0;
	rect.w = message_text->w;
	rect.h = message_text->h;

	scr_rect.x = MESSAGE_LEFT;
	scr_rect.y = MESSAGE_TOP;

	display(message_text, &rect, &scr_rect);

	while(!close_msg){
		if(SDL_PollEvent(&event)){
			switch(event.type){
				case SDL_KEYDOWN:
					if(event.key.keysym.sym == SDLK_SPACE){
						close_msg = 1;
					}
					break;
			}
		}
		SDL_Delay(1);
	}
	SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_INTERVAL, SDL_DEFAULT_REPEAT_INTERVAL);

	SDL_FreeSurface(message_text);

	return 0;
}

int main(){
	SDL_Surface *image;
	SDL_Rect rect, scr_rect, rect_tmp;
	SDL_Event event;
	int exit_prg = 0;
	
	memset(ObjectMatrix, 0x00, sizeof(ObjectMatrix));
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_INTERVAL, SDL_DEFAULT_REPEAT_INTERVAL);

	TTF_Init();

	SDL_SetVideoMode(WINDOW_WIDTH, WINDOW_HEIGHT, BPP, SDL_HWSURFACE);

	font = TTF_OpenFont(FONT_NAME, FONT_SIZE);

	image = IMG_Load("stretch32.bmp");

	rect.x = 0;
	rect.y = 0;
	rect.w = image->w < CHAR_WIDTH ? image->w : CHAR_WIDTH;
	rect.h = image->h < CHAR_HEIGHT ? image->h : CHAR_HEIGHT;

	scr_rect.x = 0;
	scr_rect.y = 0;

	draw(image, &rect, &scr_rect);

	rect_tmp = scr_rect;

	while(exit_prg==0){
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
						case SDLK_SPACE:
							show_message("そこにはなにもありません。");
							break;
					}
					if(rect_tmp.x >= 0 && rect_tmp.x < __WIDTH && rect_tmp.y >= 0 && rect_tmp.y <__HEIGHT && ObjectMatrix[rect_tmp.y][rect_tmp.x] == 0){
						scr_rect = rect_tmp;
						draw(image, &rect, &scr_rect);
					}else{
						rect_tmp = scr_rect;
					}
					break;
			}
		}
		SDL_Delay(100);
	}

	SDL_FreeSurface(image);

	TTF_CloseFont(font);


	TTF_Quit();
	SDL_Quit();

	return 0;
}
