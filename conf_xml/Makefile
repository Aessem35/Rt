##
## Makefile for Makefile in /home/lair_f/rendu/Rt/conf_xml
##
## Made by lair_f
## Login   <lair_f@epitech.net>
##
## Started on  Wed May 28 13:24:12 2014 lair_f
## Last update Mon Jun  2 16:50:08 2014 lair_f
##

RM	=	rm -f

SRC	=	my_parse_xml.c \
		get_next_line.c \

NAME	=	xml

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I include/ -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	cc -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) *~
	$(RM) \#*#

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
