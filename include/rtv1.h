/*
** main.h for  in /home/sainto_p/rendu/MUL_2013_rtv1
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Thu Feb 27 16:31:41 2014 sainto_p
** Last update Sun Jun  8 14:45:29 2014 sainto_p
*/

#ifndef	RTV1_STRUCT
#define RTV1_STRUCT

#include "mlx_int.h"

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

typedef	struct	s_sdcone
{
  float	k[2];
  float	delta;
  float	x;
  float	y;
  float	z;
  float	angle;
  float	rayon;
} t_sdcone;

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

float	lum_cylinder(t_coord vec, t_cylinder oeil);
void    my_pixel_put_to_image(t_img *, int , int , t_color ); 
float	calc_cone(t_coord );
float	calc_second_cone(t_coord );
float   lum_sphere(t_coord , t_sphere);
float   calc_cylinder(t_coord );
float   calc_plan(t_coord );
float   calc_sphere(t_coord );
float	lum_plan(t_coord , t_plan );
int     calc(t_img *, int, int);
int     rt_loop(t_img *);
int     my_key_hook(int, void *);
int	gere_expose(t_img *, void *, void *);

#endif
