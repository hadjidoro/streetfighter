#include <SDL/SDL.h>
#include "global.h"

void update_screen()
{
  SDL_FillRect(fond, NULL, SDL_MapRGB(fond->format, 255, 255, 255));
  SDL_BlitSurface(player_1, NULL, fond, &ryu_1.side);
  SDL_BlitSurface(player_2, NULL, fond, &ryu_2.side);
  SDL_Flip(fond);
}
