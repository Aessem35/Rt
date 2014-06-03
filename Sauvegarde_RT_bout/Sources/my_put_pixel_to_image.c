/*
** my_put_pixel_to_image.c for my_put_pixel_to_image in /home/boutel_a/rendu/MUL_2014_wolf3d
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Fri Jan 10 09:25:09 2014 boutel_a
** Last update Thu Feb 27 01:22:26 2014 boutel_a
*/

#include <stdlib.h>
#include "rtv1.h"

int	my_put_pixel_to_image(t_mlx *p, t_color *c, int x, int y)
{
  int	i;

  if (x >= 0 && y >= 0 && x <= 1000 && y <= 1000)
    {
      i = (y * p->sizeline) + (x * (p->bpp / 8));
      p->data[i] = c->r;
      p->data[i + 1] = c->g;
      p->data[i + 2] = c->b;
    }
  return (0);
}
