#include <SDL/SDL.h>

void quit(SDL_Event event, int *wheel)
{
  switch(event.type)
    {
    case SDL_QUIT:
      *wheel = 0;
    }
}
