all: fight

fight: master.o  all_surface.o beat.o colision.o control_position.o free_surface.o global.o load_surface.o mvt_1.o mvt_2.o quit.o wait_time.o random.o      reaction_assaut.o reaction_move.o  update_screen.o
	gcc -o fight master.o  all_surface.o beat.o colision.o control_position.o free_surface.o global.o load_surface.o mvt_1.o mvt_2.o quit.o wait_time.o random.o      reaction_assaut.o reaction_move.o  update_screen.o -lSDL_image -W -Wall `sdl-config --libs`

update_screen.o: update_screen.c global.h
	gcc -c update_screen.c -lSDL -W -Wall

reaction_move.o: reaction_move.c random.c global.h
	gcc -c reaction_move.c -lSDL -W -Wall

reaction_assaut.o: reaction_assaut.c random.c global.h
	gcc -c reaction_assaut.c random.c -lSDL -W -Wall



#random.o: random.c
#	gcc -c random.c -W -Wall

wait_time.o: wait_time.c
	gcc -c wait_time.c -W -Wall

quit.o: quit.c
	gcc -c quit.c -lSDL -W -Wall

mvt_2.o: mvt_2.c fonction.h
	gcc -c mvt_2.c -lSDL #-W -Wall

mvt_1.o: mvt_1.c fonction.h
	gcc -c mvt_1.c -lSDL #-W -Wall

load_surface.o: load_surface.c
	gcc -c load_surface.c -lSDL  -lSDL_image -W -Wall

global.o: global.c 
	gcc -c global.c -lSDL -W -Wall

free_surface.o: free_surface.c global.h
	gcc -c free_surface.c -lSDL -W -Wall

control_position.o: control_position.c global.h macro.h 
	gcc -c control_position.c -lSDL -W -Wall

colision.o: colision.c fonction.h
	gcc -c colision.c -lSDL -W -Wall

beat.o: beat.c  global.h fonction.h
	gcc -c beat.c -lSDL -W -Wall

all_surface.o: all_surface.c global.h fonction.h
	gcc -c all_surface.c -lSDL -W -Wall	

master.o: master.c global.h fonction.h macro.h 
	gcc -c master.c -lSDL -W -Wall

.PHONY: clean
clean:
	rm *.o
	rm *~

