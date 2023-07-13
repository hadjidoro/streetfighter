#include <SDL/SDL.h>
#include "global.h"
#include "fonction.h"

void colision(SDL_Event event)
{
  int i, j, k = ryu_2.side.x - ryu_1.side.x;
  int tempsPrecedent = 0, tempsActuel = 0;

  if(k > 70 && k < 100)
    {
      j = nbr_random(1,5);
      if(j == 2)
	{
	  switch(event.type)
	    {
	    case SDL_KEYDOWN:
	      i = 1;
	      tempsPrecedent = 0, tempsActuel = 0;
	      while(i < 3)
		{
		  player_2 = ryu_2.block[i];
		  update_screen();
		  tempsActuel = SDL_GetTicks();
		  i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '0', 0);
		}
	      break;//----
	      
	    case SDL_KEYUP://----
	      player_2 = ryu_2.block[0];
	      update_screen();
	      break;//----
	    }
	}
      
      else if(j == 4)
	{
	  switch(event.type)
	    {
	    case SDL_KEYDOWN://----
	      player_2 = ryu_2.Down[0];
	      update_screen();
	      break;//----
		  
	    case SDL_KEYUP://----
	      player_2 = ryu_2.Down[2];
	      update_screen();
	      break;//----
	    }
	}

      else
	{
	  switch(event.type)
	    {
	    case SDL_KEYDOWN:
	      i = 0;
	      tempsPrecedent = 0, tempsActuel = 0;
	      while(i < 3)
		{
		  player_2 = ryu_2.beat[i];
		  update_screen();
		  tempsActuel = SDL_GetTicks();
		  i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '0', 0);
		}
	      break;//----
	      
	    case SDL_KEYUP://----
	      player_2 = ryu_2.beat[3];
	      update_screen();
	      break;//----
	    }

	}
    }
}
