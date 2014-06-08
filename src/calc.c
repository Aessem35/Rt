/*
** calc.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:24:40 2014 sainto_p
** Last update Sun Jun  8 23:26:57 2014 sainto_p
*/

#include <stdio.h>
#include "rtv1.h"

int	my_lum_color_sphere(t_color color, float cos)
{
  color.hexa = 0xFF0000;
  color.content[0] *= cos;
  color.content[1] *= cos;
  color.content[2] *= cos;
  return (color.hexa);
}

int	my_lum_color_cylinder(t_color color, float cos)
{
  color.hexa = 0xFFFF00;
  color.content[0] *= cos;
  color.content[1] *= cos;
  color.content[2] *= cos;
  return (color.hexa);
}

int	my_lum_color_cone(t_color color, float cos)
{
  color.hexa = 0x00FF00;
  color.content[0] *= cos;
  color.content[1] *= cos;
  color.content[2] *= cos;
  return (color.hexa);
}

int	my_lum_color_plan(t_color color, float cos2)
{
  color.hexa = 0x0000FF;
  color.content[0] *= cos2;
  color.content[1] *= cos2;
  color.content[2] *= cos2;
  return (color.hexa);
}

int	calc(t_img *img, int i, int j)
{
  t_all	all;
  t_cos_lum c;
  float k[5];

  all.vec.x = 100;
  all.vec.y = (img->width / 2) - i;
  all.vec.z = (img->height / 2) - j;
  k[0] = calc_sphere(all.vec, &all.sphere);
  k[1] = calc_plan(all.vec, &all.plan);
  k[2] = calc_cylinder(all.vec, &all.cylinder);
  k[3] = calc_cone(all.vec, &all.cone);
  c.cos_sphere = lum_sphere(all.vec, &all.sphere);
  c.cos_plan = lum_plan(all.vec, &all.plan);
  c.cos_cylinder = lum_cylinder(all.vec, &all.cylinder);
  c.cos_cone = lum_cone(all.vec, &all.cone);
  if (k[0] >= PLAN && ((k[1] >= PLAN && k[0] <= k[1]) || k[1] <= 0))
    return (c.result = my_lum_color_sphere(all.color, c.cos_sphere));
  if (k[2] >= PLAN && ((k[1] >= PLAN && k[2] <= k[1]) || k[1] <= PLAN))
    return (c.result = my_lum_color_cylinder(all.color, c.cos_cylinder));
  else if (k[3] >= PLAN && ((k[1] >= PLAN && k[3] <= k[1]) || k[1] <= PLAN))
    return (c.result = my_lum_color_cone(all.color, c.cos_cone));
  else if (k[1] > PLAN)
    return (c.result = my_lum_color_plan(all.color, c.cos_plan));
  return (0);
}
