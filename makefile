CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = quiz.o questions.o 
EXEC = quiz

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

quiz.o : quiz.c questions.h validation.h
	$(CC) $(CFLAGS) quiz.c -c

questions.o : questions.c questions.h
	$(CC) $(CFLAGS) questions.c -c

validation.o : validation.c validation.h
	$(CC) $(CFLAGS) validation.c -c

clean:
	rm -f $(EXEC) $(OBJ)