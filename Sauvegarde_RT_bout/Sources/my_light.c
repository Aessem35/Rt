/*
** my_light.c for my_light in /home/boutel_a/rendu/MUL_2013_rtv1/Sources
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Thu Feb 27 02:32:19 2014 boutel_a
** Last update Sun Mar 16 21:48:54 2014 boutel_a
*/
#include <math.h>
#include "rtv1.h"
#include "my.h"

int	my_light(t_int *h, t_mlx *p, t_lum *l)
{
  t_color	c;

  l->xlum = -400;
  l->ylum = -200;
  l->zlum = 100;
  l->tx = h->xoeil + (h->kf * h->vx);
  l->ty = h->yoeil + (h->kf * h->vy);
  l->tz = h->zoeil + (h->kf * h->vz);
  l->spotx = (l->xlum - l->tx);
  l->spoty = (l->ylum - l->ty);
  l->spotz = (l->zlum - l->tz);
  l->calcul = (((l->tx * l->spotx) + (l->ty * l->spoty) + (l->tz * l->spotz)) /
	    (sqrt((pow(l->tx, 2.0) + pow(l->ty, 2.0) + pow(l->tz, 2.0)) *
		  (pow(l->spotx, 2.0) + pow(l->spoty, 2.0) + pow(l->spotz, 2.0)))));
  if (l->calcul < 0.1)
    l->calcul = 0.1;
  if (l->calcul >= 0 && l->calcul <= 1)
    {
      c.r = 0 * l->calcul;
      c.g = 0 * l->calcul;
      c.b = 255 * l->calcul;
      my_put_pixel_to_image(p, &c, h->xp, h->yp);
    }
  else
    return (0);
}
