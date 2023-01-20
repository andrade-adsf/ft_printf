NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf
LIBFT = ./libft/libft.a

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

all: libft $(NAME)

clean:
	$(REMOVE) $(OBJS)
	make clean -C ./libft

fclean: clean
	$(REMOVE) $(NAME)
	make fclean -C ./libft

re: fclean all

libft:
	make -C ./libft

%.o: %.c
		gcc -c $(FLAGS) -I ./libft $< -o $@

$(NAME): $(LIBFT) $(OBJS)
		cp $(LIBFT) $@
		ar -rcs $(NAME) $^ 
		
.PHONY: libft all