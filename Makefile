NAME=libftprintf.a
C=cc
C_FLAGS=-Wall -Wextra -Werror
LIB_COMP=ar rcs
C_FILES=ft_printf_putchar.c\
		ft_printf_putnbr.c\
		ft_printf_putptr.c\
		ft_printf_putstr.c\
		ft_printf_putuint.c\
		ft_printf_putxmaj.c\
		ft_printf_putxmin.c\
		ft_printf.c
O_FILES=$(C_FILES:.c=.o)
LIBFT_O_FILES=libft/ft_atoi.o libft/ft_bzero.o libft/ft_calloc.o libft/ft_isalnum.o libft/ft_isalpha.o libft/ft_isascii.o libft/ft_isdigit.o libft/ft_isprint.o libft/ft_itoa.o libft/ft_lstadd_back_bonus.o libft/ft_lstadd_front_bonus.o libft/ft_lstclear_bonus.o libft/ft_lstdelone_bonus.o libft/ft_lstiter_bonus.o libft/ft_lstlast_bonus.o libft/ft_lstmap_bonus.o libft/ft_lstnew_bonus.o libft/ft_lstsize_bonus.o libft/ft_memchr.o libft/ft_memcmp.o libft/ft_memcpy.o libft/ft_memmove.o libft/ft_memset.o libft/ft_putchar_fd.o libft/ft_putendl_fd.o libft/ft_putnbr_fd.o libft/ft_putstr_fd.o libft/ft_split.o libft/ft_strchr.o libft/ft_strdup.o libft/ft_striteri.o libft/ft_strjoin.o libft/ft_strlcat.o libft/ft_strlcpy.o libft/ft_strlen.o libft/ft_strmapi.o libft/ft_strncmp.o libft/ft_strnstr.o libft/ft_strrchr.o libft/ft_strtrim.o libft/ft_substr.o libft/ft_tolower.o libft/ft_toupper.o
LIBFT_A=libft/libft.a
LIBFT_DIR=libft/


all: $(NAME)

$(NAME): $(LIBFT_O_FILES) $(O_FILES)
	$(LIB_COMP) $(NAME) $(O_FILES) $(LIBFT_O_FILES)

$(LIBFT_O_FILES): $(LIBFT_A)

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

# display_header:
# 	@echo "\e[0;34m"
# 	@echo "# **************************************************************************** #"
# 	@echo "#                                                                              #"
# 	@echo "#                                                         :::      ::::::::    #"
# 	@echo "#    FT_Printf                                          :+:      :+:    :+:    #"
# 	@echo "#                                                     +:+ +:+         +:+      #"
# 	@echo "#    By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+         #"
# 	@echo "#                                                 +#+#+#+#+#+   +#+            #"
# 	@echo "#    Created: 2025/11/18 16:33:41 by gtourdia          #+#    #+#              #"
# 	@echo "#    Updated: 2025/11/18 16:33:42 by gtourdia         ###   ########.fr        #"
# 	@echo "#                                                                              #"
# 	@echo "# **************************************************************************** #"
# 	@echo "\e[0;37m"


.PHONY: all clean fclean re