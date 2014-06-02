##
## Makefile for Makefile in /home/boutel_a/rendu/Minilib-x
## 
## Made by boutel_a
## Login   <boutel_a@epitech.net>
## 
## Started on  Thu Nov 21 16:37:49 2013 boutel_a
## Last update Mon Jun  2 11:05:25 2014 richar_2
##

RM	= rm -f \
	  rm *~ 

CFLAGS	+= -I./INCLUDE/ 

CC	= gcc -g $(CFLAGS)

NAME	= rtv1

SOUR	= SRC/

SRCS	= $(SOUR)my_put_pixel_to_image.c \
	  $(SOUR)my_put_color.c \
	  $(SOUR)my_inter_sphere.c \
	  $(SOUR)my_inter_plan.c \
	  $(SOUR)my_light.c \
	  $(SOUR)my_light_plan.c \
	  $(SOUR)rtv1.c \

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) -o $(NAME) $(OBJS) -L./MLX/ -lmlx -lX11 -lXext -lm

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
