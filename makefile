CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = quiz.o
EXEC = quiz

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

quiz.o : quiz.c quiz.h
	$(CC) $(CFLAGS) quiz.c -c

clean:
	rm -f $(EXEC) $(OBJ)