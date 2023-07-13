#include <SDL/SDL.h>
#include "global.h"
#include "fonction.h"

void beat(SDL_Event event)
{

  int i = 0, k = ryu_2.side.x - ryu_1.side.x;
  int tempsPrecedent = 0, tempsActuel = 0;


  if(k > 70 && k < 100)
    {
      switch(event.type)
	{
	case SDL_KEYDOWN:
	  i = 0;
	  tempsPrecedent = 0, tempsActuel = 0;
	  while(i < 3)
	    {
	      player_1 = ryu_1.beat[i];
	      update_screen();
	      tempsActuel = SDL_GetTicks();
	      i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '0', 0);
	    }
	  break;//----
	      
	case SDL_KEYUP://----
	  player_1 = ryu_1.beat[3];
	  update_screen();
	  break;//----
	}

    }

}

