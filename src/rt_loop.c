/*
** rt_loop.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:25:10 2014 sainto_p
** Last update Thu Jun  5 16:35:56 2014 sainto_p
*/

#include "rtv1.h"

int     rt_loop(t_img *img)
{
  t_color color;
  int	i;
  int	j;

  i = 0;
  j = 0;
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
