#include <SDL/SDL.h>
#include "global.h"
#include "macro.h"

void control_position(char sign, int Joueur)
{

  int a = ryu_1.side.x, b = ryu_2.side.x, c = ryu_2.side.x - ryu_1.side.x;

  if(a == 0)
    ryu_1.side.x += 100;

  else if((a + 70) >= WIDTH)
    ryu_1.side.x -= 100;


  else  if (b >= (WIDTH - 70))
    ryu_2.side.x -= 10;

  else if(c >= 0 && c <= 80)
    {
      ryu_2.side.x += 10;
      ryu_1.side.x -= 10;
    }
   
  
  else
    {

      if(sign == '-')
	{
	  if(Joueur == 1)
	    ryu_1.side.x -= 1; 
	  
	  if(Joueur == 2)
	    ryu_2.side.x -= 10; 
	}   	      

      if(sign == '+')
	{
	  if(Joueur == 1)
	    ryu_1.side.x += 10; 
	  if(Joueur == 2)
	    ryu_2.side.x += 5; 
	}   	      
    }
}
