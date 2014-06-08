/*
** main.h for  in /home/sainto_p/rendu/MUL_2013_rtv1
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Thu Feb 27 16:31:41 2014 sainto_p
** Last update Sun Jun  8 23:29:16 2014 sainto_p
*/

#ifndef	RTV1__STRUCT__
#define RTV1__STRUCT__

#include "mlx_int.h"

#define SPOTX -400.0
#define SPOTY 200.0
#define SPOTZ 50.0

#define CAMX -300.0
#define CAMY 0.0
#define CAMZ 50.0

#define EQUA 2.0
#define PLAN 0.0
#define ECHAP 65307

typedef union u_color
{
  int		hexa;
  unsigned char	content[4];
} t_color;

typedef struct s_vec
{
  float	x;
  float	y;
  float	z;
} t_coord;

typedef	struct s_equa
{
  float	x;
  float	y;
  float	z;
} t_fcoord;

typedef	struct s_sphere
{
  float	k[2];
  float	delta;
  float	x;
  float	y;
  float	z;
} t_sphere;

typedef	struct	s_cylinder
{
  float	k[2];
  float	delta;
  float	x;
  float	y;
  float	z;
  float	rayon;
} t_cylinder;

typedef	struct	s_cone
{
  float	k[2];
  float	delta;
  float	x;
  float	y;
  float	z;
  float	angle;
  float	rayon;
} t_cone;

typedef struct s_plan
{
  float	k;
  float	x;
  float	y;
  float	z;
} t_plan;

typedef struct	s_lum_sphere
{
  float	xlum;
  float	ylum;
  float	zlum;
  float	lx;
  float	ly;
  float	lz;
  float	spotx;
  float	spoty;
  float	spotz;
  float cos;
} t_lum_sphere;

typedef struct  s_lum_cylinder
{
  float xlum;
  float ylum;
  float zlum;
  float lx;
  float ly;
  float lz;
  float spotx;
  float spoty;
  float spotz;
  float cos;
} t_lum_cylinder;

typedef struct  s_lum_cone
{
  float xlum;
  float ylum;
  float zlum;
  float lx;
  float ly;
  float lz;
  float spotx;
  float spoty;
  float spotz;
  float cos;
} t_lum_cone;

typedef struct s_cos_lum
{
  float cos_sphere;
  float cos_plan;
  float cos_cylinder;
  float cos_cone;
  float result;
} t_cos_lum;

typedef struct s_all
{
  t_sphere sphere;
  t_color color;
  t_plan plan;
  t_cylinder cylinder;
  t_cone cone;
  t_coord vec;
} t_all;

int     my_key_hook(int, void *);
int     gere_expose(t_img *, void *, void *);

int     rt_loop(t_img *);
void    my_pixel_put_to_image(t_img *, int , int , t_color);
int     calc(t_img *, int, int);

float   calc_cone(t_coord , t_cone *);
float   calc_cylinder(t_coord , t_cylinder *);
float   calc_plan(t_coord , t_plan *);
float   calc_sphere(t_coord , t_sphere *);

float   lum_plan(t_coord , t_plan *);
float   lum_sphere(t_coord , t_sphere *);
float   lum_cylinder(t_coord , t_cylinder *);
float   lum_cone(t_coord , t_cone *);

int     my_lum_color_sphere(t_color , float);
int     my_lum_color_cylinder(t_color , float);
int     my_lum_color_cone(t_color , float);
int     my_lum_color_plan(t_color , float);

#endif
