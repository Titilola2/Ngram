
CC = gcc
SRC = my_ngram.c
NAME = my_ngram
OBJ = $(SRC:%.c=%.o)
CFLAGS = -Wall -Werror -Wextra

%.o: %.c my_ngram.h
	$(CC) $(CFLAGS) -c -o $@ $<

all: my_ngram.h $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all
