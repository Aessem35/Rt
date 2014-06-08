/*
** cylinder.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:23:20 2014 sainto_p
** Last update Sun Jun  8 13:59:51 2014 sainto_p
*/

#include <math.h>
#include "rtv1.h"

float   calc_cylinder(t_coord vec)
{
  t_fcoord equa;
  t_cylinder oeil;

  oeil.rayon = 100.0;
  oeil.x = -200.0;
  oeil.y = 0.0;
  equa.x = pow(vec.x, 2) + pow(vec.y, 2);
  equa.y = EQUA*((oeil.x * vec.x) + (oeil.y * vec.y));
  equa.z = pow(oeil.x, 2) + pow(oeil.y, 2) - pow(oeil.rayon, 2);
  oeil.delta = pow(equa.y, 2) - 4 * equa.x * equa.z;
  if (oeil.delta < 0.0)
    return (-1.0);
  oeil.k[0] = (-equa.y + sqrtf(oeil.delta)) / (EQUA * equa.x);
  oeil.k[1] = (-equa.y - sqrtf(oeil.delta)) / (EQUA * equa.x);
  if (oeil.k[0] < oeil.k[1])
    return (oeil.k[0]);
  return (oeil.k[1]);
}
