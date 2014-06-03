/*
** my_put_pixel_to_wall.c for my_put_pixel_to_wall in /home/boutel_a/rendu/MUL_2014_wolf3d
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Sun Jan 12 16:58:06 2014 boutel_a
** Last update Sun Jan 12 21:48:11 2014 boutel_a
*/

#include "wolf.h"

int	my_put_pixel_to_wall(int r)
{
  t_mlx	*p;
  t_color	*c;
  int	cc;
  int	t;
  int	y;

  cc = 250 - (r / 2);
  t = 250 + (r / 2);
  y = 0;
  while (cc <= t)
    {
      my_put_color(&c, 175, 175, 175);
      my_put_pixel_to_image(&p, &c, cc, y);
      cc++;
    }
}
