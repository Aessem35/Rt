#ifndef RT_H_
# define RT_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <stdio.h>
#include "get_next_line.h"

typedef struct s_camera
{
  float			x;
  float			y;
  float			z;
  float			fov;
  float			lookAtX;
  struct s_camera	*next;
  struct s_camera	*prev;
} t_camera;

typedef	struct s_plan
{
  float			x;
  float			y;
  float			z;
  struct s_plan		*next;
  struct s_plan		*prev;
} t_plan;

typedef	struct s_sphere
{
  float			k[2];
  float			delta;
  float			x;
  float			y;
  float			z;
  struct s_sphere	*next;
  struct s_sphere	*prev;
} t_sphere;

typedef	struct	s_cylinder
{
  float			k[2];
  float			delta;
  float			x;
  float			y;
  float			z;
  float			rayon;
  struct s_cylinder	*next;
  struct s_cylinder	*prev;
} t_cylinder;

typedef	struct	s_cone
{
  float			k[2];
  float			delta;
  float			x;
  float			y;
  float			z;
  float			angle;
  float			rayon;
  struct s_cone		*next;
  struct s_cone		*prev;
} t_cone;

typedef	struct	s_sdcone
{
  float			k[2];
  float			delta;
  float			x;
  float			y;
  float			z;
  float			angle;
  float			rayon;
  struct s_sdcone	*next;
  struct s_sdcone	*prev;
} t_sdcone;

typedef struct	s_init
{
  float			x;
  float			y;
  float			z;
  float			delta;
  float			angle;
  float			rayon;
  float			fov;
  float			lookAtX;
} t_init;

char	**my_str_to_wordtab(char *);
int	my_strlen(char *);
int	my_strcmp(char *, char*);
void	my_putchar(int, char);
void	my_putstr(int, char *);
int	intmsg(char *, int);
void	my_puttab(int, char **);
int	my_init_list2(char **, int, t_init *);
t_init	*my_init_list(char **);
int	my_put_in_list_camera(t_camera **, t_init *);

#endif /* !RT_H__ */
