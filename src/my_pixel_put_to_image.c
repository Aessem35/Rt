/*
** my_pixel_put_to_image.c for rt in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Fri Mar 14 23:52:10 2014 sainto_p
** Last update Sun Jun  8 23:30:23 2014 sainto_p
*/

#include "rtv1.h"

void    my_pixel_put_to_image(t_img *img, int x, int y, t_color color)
{
  int   i;

  if (x < 0 || y < 0 || x >= img->width || y >= img->height)
    return ;
  i = 0;
  while (i < 4)
    {
      img->data[y * img->size_line + x * 4 + i] = color.content[i];
      ++i;
    }
}
