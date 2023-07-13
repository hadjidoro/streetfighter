#ifndef __FONCT__
#define __FONCT__
#include <SDL/SDL.h>


void update_screen();
void reaction_move(SDL_Event event);
void quit(SDL_Event event, int *wheel);
void mvt_2(SDL_Event event);
void mvt_1(SDL_Event event);
void load_surface(SDL_Surface **anime, char **img, int size);
void free_surface();
void control_position(char sign, int Joueur);
void colision(SDL_Event event);
void beat(SDL_Event event);
void all_surface();
int  wait_time(int tempsActuel, int *tempsPrecedent, int cpt, int time, char c, int Joueur);
int  reaction_assaut(SDL_Event event);
int  nbr_random(int a, int b);

#endif
