###############################################################################
## ARGUMENTS

EXEC=libft.a
CFLAGS=-Wall -Wextra -Werror
SRCS=$(addprefix $(SRC_DIR), $(SRC))
OBJ=$(SRC:.c=.o)
HEAD=$(addprefix $(INCLUDE), $(HEADER))
CC=cc

###############################################################################
## SOURCES 

SRC_DIR=srcs/
INCLUDE=includes/
SRC=ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
HEADER=libft.h

###############################################################################
## RULES

all: $(EXEC)
	@echo "\nDone ! .......\n"

$(EXEC): $(OBJ)
	@echo "\nCreating Libft.a FILE .......\n"
	ar -rcs $(EXEC) $(OBJ)

$(OBJ):
	@echo "\nCOMPILE all c files to .o FILES .......\n"
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HEAD) 

clean:
	rm -f $(OBJ)

fclean:clean
	@echo "\nFCLEAN all .o et .a files .......\n"
	rm -f $(EXEC)	

re:fclean all
	@echo "\nAll erased and re compiled .......\n"

.PHONY: all clean fclean re 
