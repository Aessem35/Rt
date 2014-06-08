##
## Makefile for  in /home/sainto_p/rendu/MUL_2013_rt/Rt
## 
## Made by sainto_p
## Login   <sainto_p@epitech.net>
## 
## Started on  Sun Jun  8 14:09:13 2014 sainto_p
## Last update Sun Jun  8 14:09:15 2014 sainto_p
##

CC = 	gcc

NAME =	rt

SRCS =	src/main.c \
	src/my_pixel_put_to_image.c\
	src/cones.c \
	src/cylinder.c \
	src/plan.c \
	src/sphere.c \
	src/rt_loop.c \
	src/gere_key.c \
	src/calc.c


OBJS = 	$(SRCS:.c=.o)

CFLAGS += -Wall -Wextra
CFLAGS += -L./minilibx/ -lmlx -lX11 -lXext -lm
CFLAGS += -I./include/ -I./minilibx/

all: $(NAME)

$(NAME): $(OBJS)
	cc -o $(NAME) $(OBJS) $(CFLAGS)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
