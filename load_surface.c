#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

void load_surface(SDL_Surface **anime, char **img, int size)
{
  int cmpt;
  for(cmpt = 0; cmpt < size; cmpt++)
    {
      anime[cmpt] = IMG_Load(img[cmpt]);
      SDL_SetColorKey(anime[cmpt], SDL_SRCCOLORKEY, SDL_MapRGB(anime[cmpt]->format, 255, 255, 255));      
    }
}
