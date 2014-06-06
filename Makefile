CC   = 	gcc

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

CFLAGS  +=      -Wall -Wextra
CFLAGS  +=      -I. -I./include/ -lm -I./minilibx
CFLAGS  +=      -L./minilibx -lmlx
CFLAGS  +=      -L/usr/lib64/X11 -lXext -lX11

all:	$(NAME)

$(NAME): $(OBJS)
	cc -o $(NAME) $(OBJS) $(CFLAGS)
clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
