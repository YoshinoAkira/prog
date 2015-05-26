#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480
#define BPP 32
#define CHAR_WIDTH 20
#define CHAR_HEIGHT 15

#define MAP_WIDTH 20
#define MAP_HEIGHT 15

#define FONT_NAME "ipag-mona.ttf"
#define FONT_SIZE 24

#define MESSAGE_WIN_LEFT 0
#define MESSAGE_WIN_TOP 400
#define MESSAGE_WIN_WIDTH (WINDOW_WIDTH)
#define MESSAGE_WIN_HEIGHT (WINDOW_HEIGHT - MESSAGE_WIN_TOP)

#define MESSAGE_PADDING 5
#define MESSAGE_LEFT (MESSAGE_PADDING + MESSAGE_WIN_LEFT)
#define MESSAGE_TOP (MESSAGE_PADDING + MESSAGE_WIN_TOP)

TTF_Font *font;
const SDL_Color color_white = {0xff, 0xff, 0xff};

typedef struct{
	SDL_Surface *surface;
	int use;
	int visible;
	SDL_Rect src_rect;
	SDL_Rect dst_rect;
}type_layer;


enum enm_layer{
	lyrBackground = 0;
	lyrCharacter,
	lyrMessageWindow,
	lyrMessage,
	lyrEnd
};

type_layer g_game_layers[lyrEnd];
char g_map[MAP_HEIGHT][MAP_WIDTH];

int getpos(SDL_Rect *from, SDL_Rect *to){
	to->x = from->x * CHAR_WIDTH;
	to->y = from->y * CHAR_HEIGHT;
	return 0;
}

int update_layer_rect_size(type_layer *layers,int indec){
	(layers + index)->src_rect.w = (layers + index)->surface->w;
	(layers + index)->src_rect.h = (layers + index)->surface->h;
	return 0;
}

int init_rect(SDL_Rect* rect){
	rect->x = 0;
	rect->y = 0;
	rect->w = 0;
	rect->h = 0;
	return 0;
}

int init_layer_rect(type_layer* layer, int index){
	init_rect(&((layer + index)->src_rect));
	init_rect(&((layer + index)->dst_rect));
	return 0;
}

int set_layer_visible(type_layer *layers, int index, int flag){
	(layers + index)->visible = flag;
	return 0;
}

int drop_surface(SDL_Surface *surface){
	SDL_FreeSurface(surface);
	return 0;
}

int drop_layer(type_layer *layer, int index){
	drop_surface((layer + index)->surface);
	(layer + index)->use = 0;
	set_layers_visible(layer, index,0);
	return 0;
}

int update_display(){
	SDL_Surface *video_surface = SDL_GetVideoSurface();
	int iLoop;

	for(iLoop = 0; iLoo)
}
