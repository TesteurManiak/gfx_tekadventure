##
## Makefile for Makefile in /home/roux_l/rendu/noise_2020
## 
## Made by Guillaume Roux
## Login   <roux_l@epitech.net>
## 
## Started on  Fri Nov  6 14:41:54 2015 Guillaume Roux
## Last update Sun Mar 20 18:51:39 2016 Guillaume Roux
##

NAME		= adventure_joe

SRC 		= ./src/tekpixel.c \
	  			./src/main.c \
	  			./src/background.c \
	  			./src/get_color.c \
	  			./src/tektxt.c \
	  			./src/dim_letter.c \
	  			./src/aff_sprite.c \
	  			./src/setup_move.c \
	  			./src/button.c \
	  			./src/mouse.c \
	  			./src/make_move.c \
	  			./src/loop.c \
	  			./src/get_state.c \
	  			./src/init_scene.c \
	  			./src/forest.c

OBJ			= $(SRC:.c=.o)

FLAG		= -W -Wall -Werror

all:		$(NAME)

$(NAME):
				gcc -o $(NAME) $(SRC) $(FLAG) -L/home/${USER}/.froot/lib/ -llapin -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system -lstdc++ -ldl -lm

clean:
				rm -f $(OBJ)

fclean:	clean
				rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
