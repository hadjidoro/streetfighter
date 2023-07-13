#include <SDL/SDL.h>
#include "global.h"

void free_surface()
{
  int i;

  SDL_FreeSurface(fond);
  SDL_FreeSurface(player_1);
  SDL_FreeSurface(player_2);

  for(i = 0; i < 10; i++)
    SDL_FreeSurface(ryu_1.Debut[i]);

  for(i = 0; i < 4; i++)
  SDL_FreeSurface(ryu_1.Left[i]);

  for(i = 0; i < 6; i++)
    SDL_FreeSurface(ryu_1.Right[i]);
  
  SDL_Quit();


  /*for(i = 0; i < 4; i++)
    SDL_FreeSurface(ryu_1.Left[i]);

  for(i = 0; i < 6; i++)
    SDL_FreeSurface(ryu_1.Right[i]);

  for(i = 0; i < 8; i++)
    SDL_FreeSurface(ryu_1.Jump[i]);

  for(i = 0; i < 3; i++)
    SDL_FreeSurface(ryu_1.Down[i]);

  for(i = 0; i < 4; i++)
    SDL_FreeSurface(ryu_1.punch[i]);

  for(i = 0; i < 6; i++)
    SDL_FreeSurface(ryu_1.demi_cercle[i]);

  for(i = 0; i < 3; i++)
    SDL_FreeSurface(ryu_1.block[i]);

  for(i = 0; i < 4; i++)
    SDL_FreeSurface(ryu_1.beat[i]);
*/

}


