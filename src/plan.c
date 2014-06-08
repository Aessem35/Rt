/*
** plan.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:23:54 2014 sainto_p
** Last update Sun Jun  8 20:36:24 2014 sainto_p
*/

#include <math.h>
#include "rtv1.h"

float   calc_plan(t_coord vec, t_plan *oeil)
{
  oeil->x = -300.0;
  oeil->y = 0.0;
  oeil->z = 50.0;
  oeil->k = (-(oeil->z) / vec.z);
  if (oeil->k > 0.00001)
    return (oeil->k);
  return (-1);
}

float   lum_plan(t_coord vec, t_plan *oeil)
{
  t_lum_sphere lum;

  lum.spotx = -400.0;
  lum.spoty = 200.0;
  lum.spotz = 50.0;
  lum.lx = CAMX + (oeil->k * vec.x);
  lum.ly = CAMY + (oeil->k * vec.y);
  lum.lz = CAMZ + (oeil->k * vec.z);
  lum.xlum = (lum.spotx - lum.lx);
  lum.ylum = (lum.spoty - lum.ly);
  lum.zlum = (lum.spotz - lum.lz);
  lum.cos = (((0.0 * lum.xlum) + (0.0 * lum.ylum) + (100.0 * lum.zlum)) /
             (sqrt((pow(0.0, 2.0) + pow(0.0, 2.0) + pow(100.0, 2.0)) *
                   (pow(lum.xlum, 2.0) + pow(lum.ylum, 2.0) + pow(lum.zlum, 2.0)))));
  if (lum.cos < 0.1)
    lum.cos = 0.1;
  if (lum.cos >= 0.1 && lum.cos <= 1)
    return (lum.cos);
}
