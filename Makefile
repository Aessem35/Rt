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

OBJS =	$(SRCS:.c=.o)

CFLAGS 	+= -L minilibx/ -lmlx -L /usr/X11/lib -lmlx -lXext -lX11 -I /usr/X11/include/
CFLAGS	+= -I include/ -lm
CFLAGS	+= -Wall -Wextra

all:	$(NAME)

$(NAME): $(OBJS)
	cc -o $(NAME) $(OBJS) $(CFLAGS)
clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
