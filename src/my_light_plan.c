/*
** my_light_plan.c for my_light_plan in /home/boutel_a/rendu/MUL_2013_rtv1/Sources
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Sun Mar 16 21:58:40 2014 boutel_a
** Last update Sun Mar 16 22:12:39 2014 boutel_a
*/

#include <math.h>
#include "rtv1.h"
#include "my.h"

int	my_light_plan(t_int *h, t_mlx *p, t_lum *l, float kp)
{
  t_color       cc;

  l->xlum = -400;
  l->ylum = -200;
  l->zlum = 100;
  l->tx = h->xoeil + (kp * 0);
  l->ty = h->yoeil + (kp * 0);
  l->tz = h->zoeil + (kp * 0);
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
      cc.r = 255 * l->calcul;
      cc.g = 0 * l->calcul;
      cc.b = 0 * l->calcul;
      my_put_pixel_to_image(p, &cc, h->xp, h->yp);
    }
  else
    return (0);
}
