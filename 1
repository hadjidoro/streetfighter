#include <SDL/SDL.h>
#include "global.h"
#include "fonction.h"
#include "macro.h"

int main(void)
{
  int wheel = 1, k = 0;
  SDL_Event event; 

  ryu_1.side.x = WIDTH/2 - 250;
  ryu_1.side.y = HEIGHT/2;
  ryu_2.side.x = WIDTH/2 + 200;
  ryu_2.side.y = HEIGHT/2;

  SDL_Init(SDL_INIT_VIDEO);

  fond = SDL_SetVideoMode(WIDTH, HEIGHT, 32, SDL_DOUBLEBUF|SDL_HWSURFACE);

  all_surface();

  while(k < 10)
    {
      SDL_FillRect(fond, NULL, SDL_MapRGB(fond->format, 255, 255, 255));
      SDL_BlitSurface(ryu_2.Debut[k], NULL, fond, &ryu_2.side);
      SDL_BlitSurface(ryu_1.Debut[k], NULL, fond, &ryu_1.side);
      SDL_Flip(fond);
      SDL_Delay(100);	
      k++;
    }

  SDL_EnableKeyRepeat(500,1000);
  while(wheel)
    {        
      SDL_PollEvent(&event);
      quit(event,&wheel);
      mvt_1(event);
    }

  free_surface();
}
