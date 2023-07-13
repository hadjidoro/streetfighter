#include "fonction.h"

int wait_time(int tempsActuel, int *tempsPrecedent, int cpt, int time, char c, int Joueur)
{
  if (tempsActuel - *tempsPrecedent > time)    
    {
      *tempsPrecedent = tempsActuel;
      control_position(c, Joueur);
      cpt++;
    }
  return cpt;
}
