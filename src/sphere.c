/*
** sphere.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:24:12 2014 sainto_p
** Last update Fri Jun  6 16:26:06 2014 sainto_p
*/

#include <math.h>
#include "rtv1.h"

float   calc_sphere(t_coord vec)
{
  t_fcoord equa;
  t_sphere oeil;

  oeil.x = -250.0;
  oeil.y = 0.0;
  oeil.z = 0.0;
  equa.x = pow(vec.x, 2) + pow(vec.y, 2) + pow(vec.z, 2);
  equa.y = EQUA * ((oeil.x * vec.x) + (oeil.y * vec.y) + (oeil.z * vec.z));
  equa.z = pow(oeil.x, 2) + pow(oeil.y, 2) + pow(oeil.z, 2) - pow(200.0, 2);
  oeil.delta = pow(equa.y, 2) - 4 * equa.x * equa.z;
  if (oeil.delta < 0.0)
    return (-1.0);
  oeil.k[0] = (-equa.y + sqrtf(oeil.delta)) / (EQUA * equa.x);
  oeil.k[1] = (-equa.y - sqrtf(oeil.delta)) / (EQUA * equa.x);
  if (oeil.k[0] < oeil.k[1])
    return (oeil.k[0]);
  return (oeil.k[1]);
}

/* float	lum_sphere(t_coord vec, t_sphere coord) */
/* { */
/*   t_lum_sphere lum; */
/*   t_fcoord equa; */

/*   lum.spotx = 500; */
/*   lum.spoty = 500; */
/*   lum.spotz = 500; */
/*   lum.lx = lum.spotx - equa.x; */
/*   lum.ly = lum.spoty - equa.y; */
/*   lum.lz = lum.spotz - equa.z; */
/*   equa.x = lum.lx + (coord.k[0] * vec.x); */
/*   equa.y = lum.ly + (coord.k[0] * vec.y); */
/*   equa.z = lum.lz + (coord.k[0] * vec.z); */
/*     lum.cos = equa.x * lum.lx + equa.y * lum.ly + equa.z * lum.lz */
/*     / sqrt(pow(equa.x, 2) + pow(equa.y, 2) + pow(equa.z, 2) */
/* 	   * (pow(lum.lx, 2) + pow(lum.ly, 2) + pow(lum.lz, 2))); */
/*   return (lum.cos); */
/* } */

float	lum_sphere(t_coord vec, t_sphere oeil)
{
  t_lum_sphere lum;

  lum.spotx = 500.0;
  lum.spoty = 500.0;
  lum.spotz = 500.0;
  lum.lx = oeil.x + (oeil.k[0] * vec.x);
  lum.ly = oeil.y + (oeil.k[0] * vec.y);
  lum.lz = oeil.z + (oeil.k[0] * vec.z);
  lum.xlum = (lum.spotx - lum.lx);
  lum.ylum = (lum.spoty - lum.ly);
  lum.zlum = (lum.spotz - lum.lz);
  lum.cos = (((lum.lx * lum.xlum) + (lum.ly * lum.ylum) + (lum.lz * lum.zlum)) /
	     (sqrt((pow(lum.lx, 2.0) + pow(lum.ly, 2.0) + pow(lum.lz, 2.0)) *
		   (pow(lum.xlum, 2.0) + pow(lum.ylum, 2.0) + pow(lum.zlum, 2.0)))));
  if (lum.cos < 0.1)
    lum.cos = 0.1;
  if (lum.cos >= 0 && lum.cos <= 1)
    return (lum.cos);
}
