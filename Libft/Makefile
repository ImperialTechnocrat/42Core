NAME = libft.a

SRC = 	$(wildcard *.c)

OBJS = $(SRC:.c=.o)

HDRS = $(wildcard *.h)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(HDRS) $(SRC) 
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
