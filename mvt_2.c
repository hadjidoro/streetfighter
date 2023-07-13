#include <SDL/SDL.h>
#include "global.h"
#include "fonction.h"

void mvt_2(SDL_Event event)
{
  int i = 0, j = 0;
  int tempsPrecedent = 0, tempsActuel = 0;
  switch (event.key.keysym.sym)
    {
    case SDLK_LEFT://----
      reaction_move(event);
      break;//----

    case SDLK_RIGHT://----
      reaction_move(event);
      break;//----

    case SDLK_c://----
      {
	colision(event);
	i = reaction_assaut(event);
	if(i == 1)
	  beat(event);      
      }
      break;//----

    case SDLK_x://----
      {
	colision(event);
	i = reaction_assaut(event);
	if(i == 1)
	  beat(event);      
      }
      break;//----
    }
}
