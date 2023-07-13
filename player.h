#ifndef __STRUCT__
#define __STRUCT__

typedef struct
{
  SDL_Surface *Debut[10];
  SDL_Surface *Left[10];
  SDL_Surface *Right[10];
  SDL_Surface *Down[10];
  SDL_Surface *Jump[10];
  SDL_Surface *demi_cercle[10];
  SDL_Surface *punch[10];
  SDL_Surface *block[10];
  SDL_Surface *beat[10];
  SDL_Rect side;
}player;


#endif
