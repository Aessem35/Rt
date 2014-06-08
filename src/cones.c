/*
** cone.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:22:35 2014 sainto_p
** Last update Sun Jun  8 13:59:34 2014 sainto_p
*/

#include <math.h>
#include <stdio.h>
#include "rtv1.h"

float   calc_cone(t_coord vec)
{
  t_fcoord equa;
  t_cone oeil;

  oeil.rayon = 100.0;
  oeil.angle = oeil.rayon * (M_PI / 180);
  oeil.x = -300.0;
  oeil.y = 600.0;
  oeil.z = 0.0;
  equa.x = pow(vec.x, 2) + pow(vec.y, 2) - (pow(vec.z, 2)
					     / pow(tan(oeil.angle), 2));
  equa.y = 2 * (vec.x * oeil.x) + 2 * (vec.y * oeil.y) - 2 * ((vec.z * oeil.z)
					     / pow(tan(oeil.angle), 2));
  equa.z = pow(oeil.x, 2) + pow(oeil.y, 2) - (pow(oeil.z, 2)
					     / pow(tan(oeil.angle), 2));
  oeil.delta = pow(equa.y, 2) - 4 * equa.x * equa.z;
  if (oeil.delta < 0.0)
    return (-1.0);
  oeil.k[0] = (-equa.y + sqrtf(oeil.delta)) / (EQUA * equa.x);
  oeil.k[1] = (-equa.y - sqrtf(oeil.delta)) / (EQUA * equa.x);
  if (oeil.k[0] < oeil.k[1])
    return (oeil.k[0]);
  return (oeil.k[1]);
}

float   calc_second_cone(t_coord vec)
{
  t_fcoord equa;
  t_sdcone oeil;

  oeil.rayon = 100.0;
  oeil.angle = oeil.rayon * (M_PI / 180);
  oeil.x = -300.0;
  oeil.y = -600.0;
  oeil.z = 0.0;
  equa.x = pow(vec.x, 2) + pow(vec.y, 2) - (pow(vec.z, 2)
               / pow(tan(oeil.angle), 2));
  equa.y = 2 * (vec.x * oeil.x) + 2 * (vec.y * oeil.y) - 2 * ((vec.z * oeil.z)
               / pow(tan(oeil.angle), 2));
  equa.z = pow(oeil.x, 2) + pow(oeil.y, 2) - (pow(oeil.z, 2)
               / pow(tan(oeil.angle), 2));
  oeil.delta = pow(equa.y, 2) - 4 * equa.x * equa.z;
  if (oeil.delta < 0.0)
    return (-1.0);
  oeil.k[0] = (-equa.y + sqrtf(oeil.delta)) / (EQUA * equa.x);
  oeil.k[1] = (-equa.y - sqrtf(oeil.delta)) / (EQUA * equa.x);
  if (oeil.k[0] < oeil.k[1])
    return (oeil.k[0]);
  return (oeil.k[1]);
}
