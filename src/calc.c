/*
** calc.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:24:40 2014 sainto_p
** Last update Sun Jun  8 21:05:45 2014 sainto_p
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
  t_sphere sphere;
  t_color color;
  t_plan plan;
  t_cylinder cylinder;
  t_cone cone;
  t_coord vec;
  float k[5];
  float	cos_sphere;
  float cos_plan;
  float cos_cylinder;
  float	cos_cone;
  float result;

  vec.x = 100;
  vec.y = (img->width / 2) - i;
  vec.z = (img->height / 2) - j;
  //k[0] = calc_sphere(vec, &sphere);
  k[1] = calc_plan(vec, &plan);
  k[2] = calc_cylinder(vec, &cylinder);
  k[3] = calc_cone(vec);
  cos_sphere = lum_sphere(vec, &sphere);
  cos_plan = lum_plan(vec, &plan);
  cos_cylinder = lum_cylinder(vec, &cylinder);
  cos_cone = lum_cone(vec, &cone);
  //if (k[0] >= PLAN && ((k[1] >= PLAN && k[0] <= k[1]) || k[1] <= 0))
  //return (result = my_lum_color_sphere(color, cos_sphere));
  if (k[2] >= PLAN && ((k[1] >= PLAN && k[2] <= k[1]) || k[1] <= PLAN))
    return (result = my_lum_color_cylinder(color, cos_cylinder));
  else if (k[3] >= PLAN && ((k[1] >= PLAN && k[3] <= k[1]) || k[1] <= PLAN))
    return (result = my_lum_color_cone(color, cos_cone));
  else if (k[1] > PLAN)
    return (result = my_lum_color_plan(color, cos_plan));
  return (0);
}
