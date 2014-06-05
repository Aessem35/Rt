/*
** calc.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:24:40 2014 sainto_p
** Last update Thu Jun  5 17:11:37 2014 sainto_p
*/

#include <stdio.h>
#include "rtv1.h"

int     calc(t_img *img, int i, int j)
{
  t_coord vec;
  float k[5];

  vec.x = 100;
  vec.y = (img->width / 2) - i;
  vec.z = (img->height / 2) - j;
  k[0] = calc_sphere(vec);
  k[1] = calc_plan(vec);
  k[2] = calc_cylinder(vec);
  k[3] = calc_cone(vec);
  k[4] = calc_second_cone(vec);
  if (k[0] >= PLAN && ((k[1] >= PLAN && k[0] <= k[1]) || k[1] <= 0))
    return (0xFF0000);
  else if (k[2] >= PLAN && ((k[1] >= PLAN && k[2] <= k[1]) || k[1] <= PLAN))
    return (0xFFFF00);
  else if (k[3] >= PLAN && ((k[1] >= PLAN && k[3] <= k[1]) || k[1] <= PLAN))
    return (0x990099);
  else if (k[4] >= PLAN && ((k[1] >= PLAN && k[4] <= k[1]) || k[1] <= PLAN))
    return (0xFFCC99);
  else if (k[1] > PLAN)
    return (0x8B6C42);
  return (0);
}
