/*
** calc.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:24:40 2014 sainto_p
** Last update Sat Jun  7 17:32:05 2014 sainto_p
*/

#include <stdio.h>
#include "rtv1.h"

int	calc(t_img *img, int i, int j)
{
  t_sphere oeil;
  t_cylinder cylinder;
  t_plan plan;
  t_color color;
  t_coord vec;
  float k[5];
  float	cos;
  float	cos_plan;
  
  vec.x = 100;
  vec.y = (img->width / 2) - i;
  vec.z = (img->height / 2) - j;
  k[0] = calc_sphere(vec);
  k[1] = calc_plan(vec);
  k[2] = calc_cylinder(vec);
  k[3] = calc_cone(vec);
  k[4] = calc_second_cone(vec);
  cos = lum_sphere(vec, oeil);
  cos_plan = lum_plan(vec, plan);
  if (k[0] >= PLAN && ((k[1] >= PLAN && k[0] <= k[1]) || k[1] <= 0))
    {
      color.hexa = 0xFF0000;
      color.content[0] *= cos;
      color.content[1] *= cos;
      color.content[2] *= cos;
      return (color.hexa);
    }
  else if (k[2] >= PLAN && ((k[1] >= PLAN && k[2] <= k[1]) || k[1] <= PLAN))
    {
      color.hexa = 0xFFFF00;
      color.content[0] *= cos;
      color.content[1] *= cos;
      color.content[2] *= cos;
      return (color.hexa);
    }
  else if (k[3] >= PLAN && ((k[1] >= PLAN && k[3] <= k[1]) || k[1] <= PLAN))
    {
      color.hexa = 0x990099;
      color.content[0] *= cos;
      color.content[1] *= cos;
      color.content[2] *= cos;
      return (color.hexa);
    }
  else if (k[4] >= PLAN && ((k[1] >= PLAN && k[4] <= k[1]) || k[1] <= PLAN))
    {
      color.hexa = 0xFFCC99;
      color.content[0] *= cos;
      color.content[1] *= cos;
      color.content[2] *= cos;
      return (color.hexa);
    }
  else if (k[1] > PLAN)
    {
      color.hexa = 0x0000FF;
      color.content[0] *= cos_plan;
      color.content[1] *= cos_plan;
      color.content[2] *= cos_plan;
      return (color.hexa);
    }
  return (0);
}
