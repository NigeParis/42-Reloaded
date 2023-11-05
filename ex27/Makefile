###############################################################################
## ARGUMENTS

EXEC=ft_display_file
CFLAGS=-Wall -Wextra -Werror
SRCS=$(addprefix $(SRC_DIR), $(SRC))
OBJ=$(SRC:.c=.o)
HEAD=$(addprefix $(INCLUDE), $(HEADER))
CC=cc
MAIN=main

###############################################################################
## SOURCES 

SRC_DIR=srcs/
INCLUDE=../includes/
SRC=ft_putchar.c ft_putstr.c ft_display_file.c
HEADER=libft.h

###############################################################################
## RULES

all: $(EXEC)
	@echo "\nDone ! .......\n"

$(EXEC): $(OBJ)
	@echo "\nlinking FILES .......\n"
	cc $(OBJ) $(MAIN).o -o $(EXEC)

$(OBJ):
	@echo "\nCOMPILE all c files to .o FILES .......\n"
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(CFLAGS) -c $(addprefix $(SRC_DIR), $(MAIN)).c -I$(HEAD) 

clean:
	rm -f $(OBJ)

fclean:clean
	@echo "\nFCLEAN all .o et .a files .......\n"
	rm -f $(EXEC) main.o	

re:fclean all
	@echo "\nAll erased and re compiled .......\n"

.PHONY: all clean fclean re 
