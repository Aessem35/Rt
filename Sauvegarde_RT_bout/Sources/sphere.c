/*
** sphere.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:24:12 2014 sainto_p
** Last update Mon Mar 17 02:06:02 2014 sainto_p
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
  equa.y = EQUA*((oeil.x * vec.x) + (oeil.y * vec.y) + (oeil.z * vec.z));
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

float	lum_sphere(t_coord vec)
{
  t_img *img;
  t_color c;
  t_sphere coord;
  t_lum_sphere lum;
  t_fcoord equa;
  
  lum.xspot = 500;
  lum.yspot = 500;
  lum.zspot = 500;
  equa.x = coord.x + (coord.k[1] * vec.x);
  equa.y = coord.y + (coord.k[1] * vec.y);
  equa.z = lum.z + (coord.k[1] * vec.z);
  coord.x = lum.xspot - equa.x;
  coord.y = lum.yspot - equa.y;
  coord.z = lum.zspot - equa.z;
  lum.cos = equa.x * lum.lx + equa.y * lum.ly + equa.z * lum.lz 
    / sqrt(pow(equa.x, 2) + pow(equa.y, 2) + pow(equa.z, 2) 
	   * (pow(lum.lx, 2) + pow(lum.ly, 2) + pow(lum.lz, 2))); 
  if (lum.cos >= 0.0 && lum.cos <= 1.0)
    {
      c.content[0] = 0 * lum.cos;
      c.content[1] = 0 * lum.cos;
      c.content[2] = 255 * lum.cos;
      my_pixel_put_to_image(img, coord.x, coord.y, c);
    }
  return (0);
}
