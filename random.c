#include <stdlib.h>
#include <time.h> 


int nbr_random(int a, int b)
{
  int i = 0;
  srand(time(NULL));
  i = rand()%(b-a) +a;

  return i;
}

