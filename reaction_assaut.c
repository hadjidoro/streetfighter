#include <SDL/SDL.h>
#include "global.h"
#include "fonction.h"

int reaction_assaut(SDL_Event event)
{
  int i = 0, j = 0;
  int tempsPrecedent = 0, tempsActuel = 0;

  if(event.key.keysym.sym == SDLK_x || event.key.keysym.sym == SDLK_c)
    {
      j = nbr_random(1,5);

      if(j == 4)
	{
	  switch(event.type)
	    {
	    case SDL_KEYDOWN: //----
	      i = 1;
	      tempsPrecedent = 0, tempsActuel = 0;
	      while(i < 6)
		{
		  player_2 = ryu_2.demi_cercle[i];
		  update_screen();
		  tempsActuel = SDL_GetTicks();
		  i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '0', 0);
		}
	      break;//----
	  
	    case SDL_KEYUP://----
	      player_2 = ryu_2.demi_cercle[0];
	      update_screen();  
	      break;//----	  
	    }
	}
      else if ( j == 3)
	{
	  switch(event.type)
	    {
	    case SDL_KEYDOWN:
	      i = 1;
	      tempsPrecedent = 0, tempsActuel = 0;
	      while(i < 4)
		{
		  player_2 = ryu_2.punch[i];
		  update_screen();
		  tempsActuel = SDL_GetTicks();
		  i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '0', 0);
		}
	      break;//----
	  
	    case SDL_KEYUP://----
	      player_2 = ryu_2.punch[0];
	      update_screen();
	      break;//----
	  
	    }
	}

      else
	{
	  switch(event.type)
	    {
	    case SDL_KEYDOWN://----
	      i = 0;	
	      tempsPrecedent = 0, tempsActuel = 0;
	      while(i < 4)
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

  if(j == 4 )
    return 1;
  else
    return 0;
}
