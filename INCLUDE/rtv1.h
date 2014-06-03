/*
** rtv1.h for rtv1 in /home/boutel_a/rendu/MUL_2013_rtv1/Include
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Wed Feb  5 14:09:53 2014 boutel_a
** Last update Mon Jun  2 15:49:14 2014 sainto_p
*/


#ifndef RTV1_H_
# define RTV1_H_

typedef struct s_void
{
  void	*win_ptr;
  void	*mlx_ptr;
  void	*img_ptr;
}t_void;

typedef struct s_mlx
{
  char	*data;
  int	bpp;
  int	sizeline;
  int	endian;
}t_mlx;

typedef struct s_lum
{
  float xlum;
  float ylum;
  float zlum;
  float tx;
  float ty;
  float tz;
  float spotx;
  float spoty;
  float spotz;
  float calcul;
}t_lum;

typedef struct s_color
{
  int	r;
  int	g;
  int	b;
}t_color;

typedef struct  s_cone
{
  float k[2];
  float delta;
  float x;
  float y;
  float z;
  float angle;
  float rayon;
} t_cone;

typedef struct s_fcoord
{
  float x;
  float y;
  float z;
} t_fcoord;

typedef struct s_int
{
  int	widht;
  int	lenght;
  int	xp;
  int	yp;
  float x1;
  float y1;
  float z1;
  float vx;
  float vy;
  float vz;
  float xoeil;
  float yoeil;
  float zoeil;
  float r;
  float	k;
  float d;
  float a;
  float b;
  float j;
  float delta;
  float kk;
  float ka;
  float kb;
  float kf;
  float	kp;
}t_int;

#endif