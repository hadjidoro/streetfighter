#include <SDL/SDL.h>
#include "global.h"
#include "fonction.h"

void all_surface()
{
  load_surface(ryu_1.Debut, Go1, 10);
  load_surface(ryu_1.Left, gauche1, 4);
  load_surface(ryu_1.Right, droite1, 6);
  load_surface(ryu_1.Jump, saut1, 8);
  load_surface(ryu_1.Down, bas1, 3);
  load_surface(ryu_1.punch, poing1, 4);
  load_surface(ryu_1.demi_cercle, cercle1, 6);
  load_surface(ryu_1.block, bloc1, 3);
  load_surface(ryu_1.beat, door1, 4);

  load_surface(ryu_2.Debut, Go2, 10);
  load_surface(ryu_2.Left, gauche2, 4);
  load_surface(ryu_2.Right, droite2, 6);
  load_surface(ryu_2.Jump, saut2, 8);
  load_surface(ryu_2.Down, bas2, 3);
  load_surface(ryu_2.punch, poing2, 4);
  load_surface(ryu_2.demi_cercle, cercle2, 6);
  load_surface(ryu_2.block, bloc2, 3);
  load_surface(ryu_2.beat, door2, 4);
}
