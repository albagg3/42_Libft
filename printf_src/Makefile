NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_print_character.c

OBJ = $(SRC:.c=.o)

DEPS = $(addsuffix .d, $(basename $(SRC)))

RM = rm -f

LIBFT = /Users/albagarc/Desktop/cursus42/printf_src/libft_src/Makefile

%.o: %.c
	$(CC) -I../carpetadeincludes.h -c $(CFLAGS) -MMD $< -o $@

all: $(MAKE) -C $(LIBFT) $(NAME)

-include $(DEPS)
$(NAME) :	$(OBJ) $(DEPS) 
			ar -rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) $(DEPS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY : all clean re fclean
