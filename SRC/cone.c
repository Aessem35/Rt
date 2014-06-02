/*
** cone.c for  in /home/sainto_p/rendu/MUL_2013_rt/Rt/SRC
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Mon Jun  2 15:32:08 2014 sainto_p
** Last update Mon Jun  2 17:06:11 2014 sainto_p
*/

#include <math.h>
#include <stdio.h>
#include "rtv1.h"

float   my_inter_cone(t_coord vec)
{
  t_cone c;
  t_fcoord equa;

  c.rayon = 100.0;
  c.angle = c.rayon * (M_PI / 180);
  c.x = -300.0;
  c.y = 0.0;
  c.z = 0.0;
  equa.x = pow(vec.x, 2) + pow(vec.y, 2) - (pow(vec.z, 2)
                                            / pow(tan(c.angle), 2));
  equa.y = EQUA * (vec.x * c.x) + 2 * (vec.y * c.y) - 2 * ((vec.z * c.z)
                                            / pow(tan(c.angle), 2));
  equa.z = pow(c.x, 2) + pow(c.y, 2) - (pow(c.z, 2)
                                            / pow(tan(c.angle), 2));
  c.delta = pow(equa.y, 2) - 4 * equa.x * equa.z;
  if (c.delta < 0.0)
    return (-1.0);
  c.k[0] = (-equa.y + sqrtf(c.delta)) / (EQUA * equa.x);
  c.k[1] = (-equa.y - sqrtf(c.delta)) / (EQUA * equa.x);
  if (c.k[0] < c.k[1])
    return (c.k[0]);
  return (c.k[1]);
}

/* float   my_check_k_cone(t_cone c) */
/* { */
/*   if (c.delta < 0.0) */
/*     return (0.0); */
/*   else if (c.delta == 0.0) */
/*     { */
/*       h->kk = (-h->b / (2 * h->a)); */
/*       if (h->kk > 0) */
/*         return (h->kk); */
/*       else */
/*         return (0.0); */
/*     } */
/*   else */
/*     { */
/*       h->ka = ((-h->b - sqrt(h->delta)) / (2 * h->a)); */
/*       h->kb = ((-h->b + sqrt(h->delta)) / (2 * h->a)); */
/*       if ((h->ka < h->kb && h->ka > 0) || */
/*           (h->ka > h->kb && h->kb < 0 && h->ka > 0)) */
/*         return (h->ka); */
/*       else if ((h->kb < h->ka && h->kb > 0) || */
/*                (h->kb > h->ka && h->ka < 0 && h->kb > 0)) */
/*         return (h->kb); */
/*       else */
/*         return (0.0); */
/*     } */
/* } */
