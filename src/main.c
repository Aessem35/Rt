/*
** main.c for  in /home/sainto_p/rendu/MUL_2013_rtv1
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Thu Feb 27 16:29:30 2014 sainto_p
** Last update Sun Jun  8 23:28:29 2014 sainto_p
*/

#include <stdlib.h>
#include <stdio.h>
#include "rtv1.h"
#include "mlx.h"

int	main(int ac, char **av)
{
  void	*mlx_ptr;
  void	*win_ptr;
  t_img	*img;

  (void)(ac);
  (void)(av);

  if (ac > 1)
    {
      printf("Do not enter arguments.\n");
      return (0);
    }
  if (!(mlx_ptr = mlx_init()))
    return (-1);
  win_ptr = mlx_new_window(mlx_ptr, 1920, 1080, "Raytracer");
  img = mlx_new_image(mlx_ptr, 1920, 1080);
  rt_loop(img);
  mlx_key_hook(win_ptr, my_key_hook, NULL);
  gere_expose(img, mlx_ptr, win_ptr);
  mlx_put_image_to_window(mlx_ptr, win_ptr, img, 0, 0);
  mlx_loop(mlx_ptr);
  return (0);
}
