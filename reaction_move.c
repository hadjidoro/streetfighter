#include <SDL/SDL.h>
#include "global.h"
#include "fonction.h"


void reaction_move(SDL_Event event)
{

  int i, j, k = ryu_2.side.x - ryu_1.side.x;
  int tempsPrecedent = 0, tempsActuel = 0;

  if(k > 0 && k < 500)
    {
      j = nbr_random(1,5);

      if(j != 3 || j != 5)
	{
	  switch(event.type)
	    {
	    case SDL_KEYDOWN://----
	      i = 1;	
	      tempsPrecedent = 0, tempsActuel = 0;
	      while(i <= 5)
		{
		  player_2 = ryu_2.Right[i];	  
		  update_screen();
		  tempsActuel = SDL_GetTicks();
		  i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '-', 2);
		}	
	      break;//----
	    case SDL_KEYUP://----
	      player_2 = ryu_2.Right[0];	  
	      update_screen();
	      break;//----	      		
	    }
	}
      else 
	{
	  switch(event.type)
	    {
	    case SDL_KEYDOWN://----
	      i = 1;	
	      tempsPrecedent = 0, tempsActuel = 0;
	      while(i <= 5)
		{
		  player_2 = ryu_2.Left[i];	  
		  update_screen();
		  tempsActuel = SDL_GetTicks();
		  i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '+', 2);
		}	
	      break;//----
	    case SDL_KEYUP://----
	      player_2 = ryu_2.Left[0];	  
	      update_screen();
	      break;//----	      		
	    }
	}

    }
}
