/*
** my_inter_plan.c for my_inter_plan in /home/boutel_a/rendu/MUL_2013_rtv1/Sources
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Tue Feb 25 16:22:29 2014 boutel_a
** Last update Sun Mar 16 21:42:19 2014 boutel_a
*/

#include <math.h>
#include "rtv1.h"

float	my_inter_plan(t_int *h)
{
  h->xoeil = -300.0;
  h->yoeil = 0.0;
  h->zoeil = 100.0;
  h->r = 200.0;
  h->x1 = 0.0;
  h->y1 = ((h->widht / 2.0) - h->xp);
  h->z1 = ((h->lenght / 2.0) - h->yp);
  h->vx = h->x1;
  h->vy = h->y1;
  h->vz = h->z1;
  if (h->vz == 0)
    return (0);
  else
    {
      h->k = (-(h->zoeil) / h->vz);
      if (h->k > 0.00001)
	return (h->k);
      else
	return (0);
    }
}
