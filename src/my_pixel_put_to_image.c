/*
** my_pixel_put_to_image.c for rt in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Fri Mar 14 23:52:10 2014 sainto_p
** Last update Sat Jun  7 14:12:12 2014 sainto_p
*/

#include "rtv1.h"

/* void            mlx_ppti(int x, int y, t_param *param, t_k *k) */
/* { */
/*   t_ppti        ppti; */
/*   short         color; */

/*   color = (k->color.blue + k->color.green + k->color.red) / 3; */
/*   if (BW_FILTER == 1) */
/*     { */
/*       k->color.blue = color; */
/*       k->color.green = color; */
/*       k->color.red = color; */
/*     } */
/*   if (SEPIA_FILTER == 1) */
/*     { */
/*       k->color.blue = color / 2 + 15; */
/*       k->color.green = color / 2 + 90; */
/*       k->color.red = color / 2 + 127; */
/*     } */
/*   ppti.data = mlx_get_data_addr(param->img, &(ppti.bpp), */
/*                                 &(ppti.sizeline), &(ppti.endian)); */
/*   ppti.data[(y * ppti.sizeline) + (x * (ppti.bpp / 8))] = k->color.blue; */
/*   ppti.data[(y * ppti.sizeline) + (x * (ppti.bpp / 8)) + 1] = k->color.green; */
/*   ppti.data[(y * ppti.sizeline) + (x * (ppti.bpp / 8)) + 2] = k->color.red; */
/* } */


/* void    my_pixel_put_to_image(t_img *img, int x, int y, t_color color) */
/* { */
/*   int   i; */

/*   if (x < 0 || y < 0 || x >= img->width || y >= img->height) */
/*     return ; */
/*   i = 0; */
/*   img->data[y * img->size_line + x * 4 + i] = color.r; */
/*   img->data[y * img->size_line + x * 4 + i + 1] = color.g; */
/*   img->data[y * img->size_line + x * 4 + i + 2] = color.b; */
  
/* } */

void    my_pixel_put_to_image(t_img *img, int x, int y, t_color color, t_lum_sphere c)
{
  int   i;
  int	cos;

  if (x < 0 || y < 0 || x >= img->width || y >= img->height)
    return ;
  i = 0;
  while (i < 4)
    {
      img->data[y * img->size_line + x * 4 + i] = color.content[i] * c.cos;
      ++i;
    }
}

