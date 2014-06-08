/*
** cylinder.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:23:20 2014 sainto_p
** Last update Sun Jun  8 23:26:50 2014 sainto_p
*/

#include <math.h>
#include "rtv1.h"

float   calc_cylinder(t_coord vec, t_cylinder *oeil)
{
  t_fcoord equa;

  oeil->rayon = 100.0;
  oeil->x = -200.0;
  oeil->y = 0.0;
  equa.x = pow(vec.x, 2) + pow(vec.y, 2);
  equa.y = EQUA*((oeil->x * vec.x) + (oeil->y * vec.y));
  equa.z = pow(oeil->x, 2) + pow(oeil->y, 2) - pow(oeil->rayon, 2);
  oeil->delta = pow(equa.y, 2) - 4 * equa.x * equa.z;
  if (oeil->delta < 0.0)
    return (-1.0);
  oeil->k[0] = (-equa.y + sqrtf(oeil->delta)) / (EQUA * equa.x);
  oeil->k[1] = (-equa.y - sqrtf(oeil->delta)) / (EQUA * equa.x);
  if (oeil->k[0] < oeil->k[1])
    return (oeil->k[0]);
  return (oeil->k[1]);
}

float   lum_cylinder(t_coord vec, t_cylinder *oeil)
{
  t_lum_cylinder lum;

  lum.spotx = SPOTX;
  lum.spoty = SPOTY;
  lum.spotz = SPOTZ;
  lum.lx = CAMX + (oeil->k[0] * vec.x);
  lum.ly = CAMY + (oeil->k[0] * vec.y);
  lum.lz = CAMZ + (oeil->k[0] * vec.z);
  lum.xlum = (lum.spotx - lum.lx);
  lum.ylum = (lum.spoty - lum.ly);
  lum.zlum = (lum.spotz - lum.lz);
  lum.cos = (((lum.lx * lum.xlum) + (lum.ly * lum.ylum) + (10.0 * lum.zlum)) /
             (sqrt((pow(lum.lx, 2.0) + pow(lum.ly, 2.0) + pow(10.0, 2.0)) *
                   (pow(lum.xlum, 2.0) + pow(lum.ylum, 2.0)
		    + pow(lum.zlum, 2.0)))));
  if (lum.cos < 0.1)
    lum.cos = 0.1;
  if (lum.cos >= 0.1 && lum.cos <= 1)
    return (lum.cos);
  return (0.0);
}
