#include <SDL/SDL.h>
#include "global.h"
#include "fonction.h"

void mvt_1(SDL_Event event)
{
  int i = 0, j = 0;
  int tempsPrecedent = 0, tempsActuel = 0;

  switch (event.key.keysym.sym)
    {
    case SDLK_RIGHT://----
      switch(event.type)
	{
	case SDL_KEYDOWN://----
	  i = 1;	
	  tempsPrecedent = 0, tempsActuel = 0;
	  while(i <= 5)
	    {
	      player_1 = ryu_1.Right[i];	  
	      update_screen();
	      tempsActuel = SDL_GetTicks();
	      i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '+', 1);
	    }	
	  mvt_2(event);
	  break;//----
	case SDL_KEYUP://----
	  player_1 = ryu_1.Right[0];	  
	  update_screen();
	  mvt_2(event);
	  break;//----	      		
	}
      break;//----



    case SDLK_LEFT://----
      switch(event.type)
	{
	case SDL_KEYDOWN://----
	  i = 0;	
	  tempsPrecedent = 0, tempsActuel = 0;
	  while(i < 4)
	    {
	      control_position('-', 1);
	      player_1 = ryu_1.Left[i];	  
	      update_screen();
	      tempsActuel = SDL_GetTicks();
	      i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '-', 1);
	    }	
	  mvt_2(event);
	  break;//----
	case SDL_KEYUP://----
	  player_1 = ryu_1.Left[0];	  
	  update_screen();
	  mvt_2(event);
	  break;//----	      		
	}
      break;//----

    case SDLK_SPACE://----
      switch(event.type)
	{
	case SDL_KEYDOWN://----
	  {
	    i = 0;
	    tempsPrecedent = 0, tempsActuel = 0;
	    while(i < 8)
	      {   
		player_1 = ryu_1.Jump[i];
		update_screen();
		tempsActuel = SDL_GetTicks();
		i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '0', 0);
	      }
	    mvt_2(event);
	  }
	  
	  break;//----
	}
      break;//----

    case SDLK_DOWN://----
      switch(event.type)
	{
	case SDL_KEYDOWN://----
	  player_1 = ryu_1.Down[0];
	  update_screen();
	  break;//----

	case SDL_KEYUP://----
	  player_1 = ryu_1.Down[2];
	  update_screen();
	  break;//----
	}
      break;//----

    case SDLK_x:
      switch(event.type)
	{
	case SDL_KEYDOWN: //----
	  i = 1;
	  tempsPrecedent = 0, tempsActuel = 0;
	  while(i < 6)
	    {
	      player_1 = ryu_1.demi_cercle[i];
	      update_screen();
	      tempsActuel = SDL_GetTicks();
	      i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '0', 0);
	      //	      ryu_1.side.x += 1;
	    }
	  mvt_2(event);
	  reaction_assaut(event);
	  break;//----
	  
	case SDL_KEYUP://----
	  player_1 = ryu_1.demi_cercle[0];
	  update_screen();
	  mvt_2(event);
	  break;//----	  
	}
      break;//----

    case SDLK_c://----
      switch(event.type)
	{
	case SDL_KEYDOWN:
	  i = 1;
	  tempsPrecedent = 0, tempsActuel = 0;
	  while(i < 4)
	    {
	      player_1 = ryu_1.punch[i];
	      update_screen();
	      tempsActuel = SDL_GetTicks();
	      i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '0', 0);
	    }
	  mvt_2(event);      
	  break;//----

	case SDL_KEYUP://----
	  player_1 = ryu_1.punch[0];
	  update_screen();
	  mvt_2(event);
	  break;//----
	}
      break;//----

    case SDLK_z://----
      switch(event.type)
	{
	case SDL_KEYDOWN:
	  i = 1;
	  tempsPrecedent = 0, tempsActuel = 0;
	  while(i < 2)
	    {
	      player_1 = ryu_1.block[i];
	      update_screen();
	      tempsActuel = SDL_GetTicks();
	      i =  wait_time(tempsActuel, &tempsPrecedent, i, 100, '0', 0);
	    }
	  mvt_2(event);
	  break;//----

	case SDL_KEYUP://----
	  player_1 = ryu_1.block[0];
	  update_screen();
	  mvt_2(event);
	  break;//----
	}
      break;//----

    }
}
