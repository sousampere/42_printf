NAME=libft.a
C=cc
C_FLAGS=-Wall -Wextra -Werror
H_FILE=libft.h
LIB_COMP=ar rcs
C_FILES=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_striteri.c
O_FILES=$(C_FILES:.c=.o)
BONUS_C_FILES=ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BONUS_O_FILES=$(BONUS_C_FILES:.c=.o)

all: $(NAME)

$(NAME): $(O_FILES)
	$(LIB_COMP) $(NAME) $(O_FILES)

clean:
	rm -rf $(BONUS_O_FILES)
	rm -rf $(O_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME) clean

libonly: $(O_FILES) $(NAME) clean

bonus: $(BONUS_O_FILES) $(O_FILES)
	$(LIB_COMP) $(NAME) $(BONUS_O_FILES) $(O_FILES)

%.o : %.c
	$(C) $(C_FLAGS) -c $< -o $@

so:
	$(C) -nostartfiles -fPIC $(C_FLAGS) $(C_FILES) $(BONUS_C_FILES)
	gcc -nostartfiles -shared -o libft.so $(O_FILES) $(BONUS_O_FILES)

.PHONY: all clean fclean re libonly bonus