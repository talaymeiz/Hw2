# CC=gcc
# AR=ar
# FLAGS= -g -Wall
# LM = -lm

# all: connections my_mat.a

# #creat library
# connections: my_mat.a main.o
# 	$(CC) $(FLAGS) -o conections my_mat.a main.o $(LM)
# my_mat.a: my_mat.o
# 	$(AR) -rcs my_mat.a my_mat.o

# my_mat.o: my_mat.c my_mat.h
# 	$(CC) $(FLAGS) -c my_mat.c

# #creat main
# main.o: main.c my_mat.h
# 	$(CC) $(FLAGS) -c main.c

# .PHONY: clean all

# clean:
# 	rm -f *.o *.a conections
CC = gcc
AR = ar
ACTIONS = my_mat.o
FLAGS = -g -Wall
LM = -lm
HEADER = my_mat.h
MAIN = main.o


all: connections my_mat.a

#creat library
actions.o: my_mat.c $(HEADER)
	$(CC) $(FLAGS) -c my_mat.c

my_mat.a: $(ACTIONS)
	$(AR) -rcs my_mat.a $(ACTIONS)


#main
connections: $(MAIN) my_mat.a
	$(CC) $(FLAGS) -o connections $(MAIN) my_mat.a $(LM)


main.o: main.c $(HEADER)
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a connections