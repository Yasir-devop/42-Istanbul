CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=minitalk

SOURCE= server.c \
		client.c \
		./Librarys/ft_printf.c \
		./Librarys/libft_utils.c \
		./Librarys/minitalk_utils.c

OBJECT= $(SOURCE:.c=.o)
SOURCE_O=./Librarys/ft_printf.o \
		  ./Librarys/libft_utils.o \
		  ./Librarys/minitalk_utils.o

all: $(NAME)

$(NAME): server client

server: $(OBJECT)
	@gcc $(CFLAGS) server.o $(SOURCE_O) -o server
	@echo "Server compiling..."

client: $(OBJECT)
	@gcc $(CFLAGS) client.o $(SOURCE_O) -o client
	@echo "Client compiling..."

clean:
	@rm -rf $(OBJECT)
	@echo "Deleted..."

fclean: clean
	@rm -rf server client
	@echo "Full deleted..."

re: fclean all

.PHONY: all clean fclean re
