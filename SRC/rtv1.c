/*
** rtv1.c for rtv1 in /home/boutel_a/rendu/MUL_2013_rtv1
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Wed Feb  5 13:58:56 2014 boutel_a
** Last update Mon Jun  2 11:06:36 2014 richar_2
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "mlx.h"
#include "rtv1.h"
#include "my.h"

int	my_check_delta(t_int *h, t_color *cc, t_color *c, t_mlx *p, t_lum *l)
{
  h->kf = my_check_k(h);
  h->kp = my_inter_plan(h);
  if (h->kf > 0.0 && h->kp <= 0.0)
    my_light_sphere(h, c, p, l);
  else if (h->kp > 0.0 && h->kf <= 0.0)
    my_light_second(h, cc, p, l);
  else if (h->kf > 0.0 && h->kf < h->kp)
    my_light_sphere(h, c, p, l);
  else if (h->kp > 0.0 && h->kp < h->kf)
    my_light_second(h, cc, p, l);
  return (0);
}

int	my_light_sphere(t_int *h, t_color *c, t_mlx *p, t_lum *l)
{
  my_put_pixel_to_image(p, c, h->xp, h->yp);
  my_light(h, p, l);
}

int	my_light_second(t_int *h, t_color *cc, t_mlx *p, t_lum *l)
{
  my_put_pixel_to_image(p, cc, h->xp, h->yp);
  my_light_plan(h, p, l, h->kp);
}

int	my_sphere_to_image(t_mlx *p, t_color *c, t_color *cc, t_lum *l)
{
  t_int	h;

  h.lenght = 1000;
  h.widht = 1000;
  h.xp = 0;
  h.yp = 0;
  my_put_color(c, 0, 0, 255);
  while (h.yp <= 1000)
    {
      while (h.xp <= 1000)
	{
	  my_inter_sphere(&h);
      	  my_inter_plan(&h);
      	  my_check_delta(&h, cc, c, p, l);
	  h.xp++;
	}
      h.yp++;
      h.xp = 0;
    }
  return (0);
}
int	gere_key(int keycode, t_void *min)
{
  if (keycode == 65307)
    {
      mlx_destroy_window(min->mlx_ptr, min->win_ptr);
      free(min->img_ptr);
      exit (0);
    }
  return (0);
}

int	main()
{
  t_color	cc;
  t_color	c;
  t_void	min;
  t_lum l;
  t_mlx		p;

  my_put_color(&cc, 255, 0, 0);
  min.mlx_ptr = mlx_init();
  if (min.mlx_ptr == NULL)
    return (0);
  min.win_ptr = mlx_new_window(min.mlx_ptr, 1000, 1000, "RTV1 Bouteloup");
  if (min.win_ptr == NULL)
    return (0);
  min.img_ptr = mlx_new_image(min.mlx_ptr, 1000, 1000);
  if (min.img_ptr == NULL)
    return (0);
  p.data = mlx_get_data_addr(min.img_ptr, &p.bpp, &p.sizeline, &p.endian);
  my_sphere_to_image(&p, &c, &cc, &l);
  mlx_put_image_to_window(min.mlx_ptr, min.win_ptr, min.img_ptr, 0, 0);
  mlx_key_hook(min.win_ptr, gere_key, &min);
  mlx_loop(min.mlx_ptr);
  return (0);
}