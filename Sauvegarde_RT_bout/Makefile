##
## Makefile for Makefile in /home/boutel_a/rendu/Minilib-x
## 
## Made by boutel_a
## Login   <boutel_a@epitech.net>
## 
## Started on  Thu Nov 21 16:37:49 2013 boutel_a
## Last update Sun Mar 16 22:30:42 2014 boutel_a
##

RM	= rm -f \
	  rm *~ 

CFLAGS	+= -I./Include/ 

CC	= gcc -g $(CFLAGS)

NAME	= rtv1

SRCS	= Sources/my_put_pixel_to_image.c \
	  Sources/my_put_color.c \
	  Sources/my_inter_sphere.c \
	  Sources/my_inter_plan.c \
	  Sources/my_light.c \
	  Sources/my_light_plan.c \
	  rtv1.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) -o $(NAME) $(OBJS) -L./minilibx/ -lmlx -lX11 -lXext -lm

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
