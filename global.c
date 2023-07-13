#include <SDL/SDL.h>
#include "player.h"

player ryu_1;
player ryu_2;

SDL_Surface *fond;
SDL_Surface *player_1;
SDL_Surface *player_2;

char *Go1[10]     = {"S1/1.jpg","S1/2.jpg","S1/3.jpg","S1/4.jpg","S1/5.jpg","S1/6.jpg","S1/7.jpg","S1/8.jpg","S1/9.jpg","S1/10.jpg"}; 
char *saut1[10]   = {"J1/1.jpg","J1/2.jpg","J1/3.jpg","J1/4.jpg","J1/5.jpg","J1/6.jpg","J1/7.jpg","J1/8.jpg"};
char *gauche1[10] = {"L1/0.jpg","L1/1.jpg","L1/2.jpg","L1/3.jpg"};
char *droite1[10] = {"R1/0.jpg","R1/1.jpg","R1/2.jpg","R1/3.jpg","R1/4.jpg","R1/5.jpg"};
char *bas1[10]    = {"D1/1.jpg","D1/2.jpg","D1/3.jpg"};
char *cercle1[10] = {"q1/0.jpg","q1/1.jpg","q1/2.jpg","q1/3.jpg","q1/4.jpg","q1/5.jpg"};
char *poing1[10]  = {"P1/0.jpg","P1/1.jpg","P1/2.jpg","P1/3.jpg"};
char *bloc1[10]   = {"B1/0.jpg","B1/1.jpg","B1/2.jpg"};
char *door1[10]   = {"beat1/0.jpg","beat1/1.jpg","beat1/2.jpg","beat1/3.jpg"};

char *Go2[10]     = {"S2/1.jpg","S2/2.jpg","S2/3.jpg","S2/4.jpg","S2/5.jpg","S2/6.jpg","S2/7.jpg","S2/8.jpg","S2/9.jpg","S2/10.jpg"}; 
char *saut2[10]   = {"J2/1.jpg","J2/2.jpg","J2/3.jpg","J2/4.jpg","J2/5.jpg","J2/6.jpg","J2/7.jpg","J2/8.jpg"};
char *gauche2[10] = {"L2/0.jpg","L2/1.jpg","L2/2.jpg","L2/3.jpg"};
char *droite2[10] = {"R2/0.jpg","R2/1.jpg","R2/2.jpg","R2/3.jpg","R2/4.jpg","R2/5.jpg"};
char *bas2[10]    = {"D2/1.jpg","D2/2.jpg","D2/3.jpg"};
char *cercle2[10] = {"q2/0.jpg", "q2/1.jpg","q2/2.jpg","q2/3.jpg","q2/4.jpg","q2/5.jpg"};
char *poing2[10]  = {"P2/0.jpg", "P2/1.jpg","P2/2.jpg","P2/3.jpg"};
char *bloc2[10]   = {"B2/0.jpg","B2/1.jpg","B2/2.jpg"};
char *door2[10]   = {"beat2/0.jpg","beat2/1.jpg","beat2/2.jpg","beat2/3.jpg"};
