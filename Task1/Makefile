CC = gcc
OBJS = arrays.o main.o numGame.o numGameFunctions.o pictureManipulation.o pictureManipulationFunctions.o
EXEC = prog
DEBUG = -g
CFLAGS = -std=c99 -Wall -Werror $(DEBUG)

$(EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $@

arrays.o: arrays.c arrays.h
main.o: main.c pictureManipulation.h numGame.h
numGame.o: numGame.c numGame.h numGameFunctions.h arrays.h
numGameFunctions.o: numGameFunctions.c numGameFunctions.h
pictureManipulation.o: pictureManipulation.c pictureManipulation.h pictureManipulationFunctions.h
pictureManipulationFunctions.o: pictureManipulationFunctions.c pictureManipulationFunctions.h

clean:
	rm -f $(OBJS) $(EXEC)

