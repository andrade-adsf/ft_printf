NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

clean:
	$(REMOVE) $(OBJS)

fclean: clean
	$(REMOVE) $(NAME) 

re: fclean all

%.o: %.c
		gcc -c $(FLAGS) -I ./libft $< -o $@

$(NAME): $(OBJS)
		cp libft/libft.a $@
		ar -rcs $(NAME) $^ 
		
.PHONY: all