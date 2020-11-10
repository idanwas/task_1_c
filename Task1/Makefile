CC = gcc
OBJS = main.o pictureManipulation.o pictureManipulationFunctions.o
EXEC = prog
DEBUG = -g
CFLAGS = -std=c99 -Wall -Werror $(DEBUG)

$(EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $@

main.o: main.c pictureManipulation.h
pictureManipulation.o: pictureManipulation.c pictureManipulation.h pictureManipulationFunctions.h
pictureManipulationFunctions.o: pictureManipulationFunctions.c


clean:
	rm -f $(OBJS) $(EXEC)

