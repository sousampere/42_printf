NAME=printf.a
C=cc
C_FLAGS=-Wall -Wextra -Werror
H_FILE=printf.h
LIB_COMP=ar rcs
C_FILES=ft_printf_putchar.c\
		ft_printf_putnbr.c\
		ft_printf_putptr.c\
		ft_printf_putstr.c\
		ft_printf_putuint.c\
		ft_printf_putxmaj.c\
		ft_printf_putxmin.c
O_FILES=$(C_FILES:.c=.o)
LIBFT_A=libft/libft.a
LIBFT_DIR=libft/

all: $(NAME)

$(NAME): $(LIBFT_A) $(O_FILES)
	$(LIB_COMP) $(NAME) $(O_FILES)

$(LIBFT_A):
	make -C $(LIBFT_DIR)

clean:
	make -C $(LIBFT_DIR) clean
	rm -rf $(O_FILES)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(LIBFT_A)

re: fclean $(NAME) clean

%.o : %.c
	$(C) $(C_FLAGS) -c $< -o $@

.PHONY: all clean fclean re