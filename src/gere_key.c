/*
** gere_key.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:25:34 2014 sainto_p
** Last update Sun Jun  8 23:30:46 2014 sainto_p
*/

#include <stdio.h>
#include "rtv1.h"
#include "mlx.h"

int     my_key_hook(int keycode, void *param)
{
  if (keycode == ECHAP)
    {
      printf("You ask to quit this program!\n");
      free(param);
      exit(EXIT_SUCCESS);
    }
    return (0);
}

int     gere_expose(t_img *img, void *mlx_ptr, void *win_ptr)
{
  mlx_put_image_to_window(mlx_ptr, win_ptr, img, 0, 0);
  return (0);
}
