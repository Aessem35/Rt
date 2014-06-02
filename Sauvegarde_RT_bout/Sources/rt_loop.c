/*
** rt_loop.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:25:10 2014 sainto_p
** Last update Sun Mar 16 20:45:25 2014 sainto_p
*/

#include "rtv1.h"

int     rt_loop(t_img *img)
{
  int   i;
  int   j;
  t_color color;

  i = 0;
  color.hexa = 0xFFFFFF;
  while (i < img->width)
    {
      i++;
      j = 0;
      while (j < img->height)
        {
          color.hexa = calc(img, i, j);
          my_pixel_put_to_image(img, i, j, color);
          j++;
        }
    }
  return (0);
}
