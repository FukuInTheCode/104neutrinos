##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Placeholder
##

NAME   = 104neutrinos

CC	   = gcc

WFLAGS = -Wall -Wextra -Wno-unused-value -Wno-sign-compare 	\
			-Wno-unused-parameter 							\

LIBS = -lm

CFLAGS = -I./include/ $(WFLAGS)

SRC	= $(shell find src/ -type f -name "*.c")

OBJ	= $(SRC:src/%.c=obj/%.o)

RED = \033[0;31m

NC = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@echo -e "$(RED)Compiling binary...$(NC)"
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

obj/%.o: src/%.c
	@echo -e "$(RED)Compiling $<...$(NC)"
	@mkdir -p $(dir $@)
	@$(CC) -c -o $@ $< $(CFLAGS)

clean:
	@rm -rf obj

fclean: clean
	@rm -f $(NAME)

re: fclean all
