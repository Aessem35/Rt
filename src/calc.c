/*
** calc.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:24:40 2014 sainto_p
** Last update Sun Jun  8 14:01:10 2014 boutel_a
*/

#include <stdio.h>
#include "rtv1.h"

float	my_lum_color_sphere(t_color color, float cos)
{
  color.hexa = 0xFF0000;
  color.content[0] *= cos;
  color.content[1] *= cos;
  color.content[2] *= cos;
  return (color.hexa);
}

float	my_lum_color_cylinder(t_color color, float cos)
{
  color.hexa = 0xFFFF00;
  color.content[0] *= cos;
  color.content[1] *= cos;
  color.content[2] *= cos;
  return (color.hexa);
}

float	my_lum_color_cone(t_color color, float cos)
{
  color.hexa = 0x00FF00;
  color.content[0] *= cos;
  color.content[1] *= cos;
  color.content[2] *= cos;
  return (color.hexa);
}

float	my_lum_color_plan(t_color color, float cos2)
{
  color.hexa = 0x0000FF;
  color.content[0] *= cos2;
  color.content[1] *= cos2;
  color.content[2] *= cos2;
  return (color.hexa);
}


int	calc(t_img *img, int i, int j)
{
  t_sphere oeil;
  t_color color;
  t_plan	loup;
  t_coord vec;
  float k[5];
  float	cos;
  float cos2;
  float result;

  vec.x = 100;
  vec.y = (img->width / 2) - i;
  vec.z = (img->height / 2) - j;
  k[0] = calc_sphere(vec);
  //  k[1] = calc_plan(vec);
  k[2] = calc_cylinder(vec);
  k[3] = calc_cone(vec);
  k[4] = calc_second_cone(vec);
  cos = lum_sphere(vec, oeil);
  cos2 = lum_plan(vec, loup);
  if (k[0] >= PLAN && ((k[1] >= PLAN && k[0] <= k[1]) || k[1] <= 0))
    return (result = my_lum_color_sphere(color, cos));
  if (k[2] >= PLAN && ((k[1] >= PLAN && k[2] <= k[1]) || k[1] <= PLAN))
    return (result = my_lum_color_cylinder(color, cos));
  else if (k[3] >= PLAN && ((k[1] >= PLAN && k[3] <= k[1]) || k[1] <= PLAN))
    return (result = my_lum_color_cone(color, cos));
  else if (k[4] >= PLAN && ((k[1] >= PLAN && k[4] <= k[1]) || k[1] <= PLAN))
  return (result = my_lum_color_cone(color, cos));
  // else if (k[1] > PLAN)
  //return (result = my_lum_color_plan(color, cos2));
  return (0);
}


