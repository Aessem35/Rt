/*
** my_inter_sphere.c for my_inter_sphere in /home/boutel_a/rendu/MUL_2013_rtv1/Sources
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Tue Feb 25 16:19:33 2014 boutel_a
** Last update Sun Mar 16 21:43:15 2014 boutel_a
*/

#include <math.h>
#include "rtv1.h"

float     my_inter_sphere(t_int *h)
{
  h->xoeil = -300.0;
  h->yoeil = 0.0;
  h->zoeil = 0.0;
  h->r = 200.0;
  h->x1 = 100.0;
  h->y1 = ((h->widht / 2.0) - h->xp);
  h->z1 = ((h->lenght / 2.0) - h->yp);
  h->vx = h->x1;
  h->vy = h->y1;
  h->vz = h->z1;
  h->r = pow(h->r, 2.0);
  h->a = pow(h->vx, 2.0) + pow(h->vy, 2.0) + pow(h->vz, 2.0);
  h->b = 2.0 * (h->xoeil * h->vx) + 2.0 *
    (h->yoeil * h->vy) + 2.0 * (h->zoeil * h->vz);
  h->j = pow(h->xoeil, 2.0) + pow(h->yoeil, 2.0) + pow(h->zoeil, 2.0) - h->r;
  h->delta = pow(h->b, 2) - (4 * h->a * h->j);
  return (h->delta);
}

float	my_check_k(t_int *h)
{
  if (h->delta < 0)
    return (0);
  else if (h->delta == 0)
    {
      h->kk = (-h->b / (2 * h->a));
      if (h->kk > 0)
	return (h->kk);
      else
	return (0.0);
    }
  else
    {
      h->ka = ((-h->b - sqrt(h->delta)) / (2 * h->a));
      h->kb = ((-h->b + sqrt(h->delta)) / (2 * h->a));
      if ((h->ka < h->kb && h->ka > 0) ||
	  (h->ka > h->kb && h->kb < 0 && h->ka > 0))
	return (h->ka);
      else if ((h->kb < h->ka && h->kb > 0) ||
	       (h->kb > h->ka && h->ka < 0 && h->kb > 0))
	return (h->kb);
      else
	return (0.0);
    }
}
