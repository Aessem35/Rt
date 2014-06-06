/*
** my_init_list.c for my_init_list.c in /home/lair_f/rendu/Rt/conf_xml
**
** Made by lair_f
** Login   <lair_f@epitech.net>
**
** Started on  Fri Jun  6 17:12:20 2014 lair_f
** Last update Fri Jun  6 22:35:55 2014 lair_f
*/

#include "rt.h"

t_init	*my_init_list(char **buf)
{
  t_init	*init;
  int		y;

  if (!init)
    {
      if ((init = malloc(sizeof (init))) == NULL)
	return (NULL);
    }
  else
    free(init);
  y = -1;
  while (buf[++y])
    {
      if (strcmp(buf[y], "x") == 0)
	if (buf[++y])
	  init->x = atof(buf[y]);
      if (strcmp(buf[y], "y") == 0)
	if (buf[++y])
	  init->y = atof(buf[y]);
      if (strcmp(buf[y], "z") == 0)
	if (buf[++y])
	  init->z = atof(buf[y]);
      if (strcmp(buf[y], "delta") == 0)
	if (buf[++y])
	  init->delta = atof(buf[y]);
      y = my_init_list2(buf, y, init);
    }
  return (init);
}

int	my_init_list2(char **buf, int y, t_init *init)
{
  if (strcmp(buf[y], "angle") == 0)
    if (buf[++y])
      init->angle = atof(buf[y]);
  if (strcmp(buf[y], "rayon") == 0)
    if (buf[++y])
      init->rayon = atof(buf[y]);
  if (strcmp(buf[y], "fov") == 0)
    if (buf[++y])
      init->fov = atof(buf[y]);
  if (strcmp(buf[y], "lookAtX") == 0)
    if (buf[++y])
      init->lookAtX = atof(buf[y]);
  return (y);
}

int	my_init_camera(char **buf)
{
  t_init	*init;
  t_camera	**camera;

  init = my_init_list(buf);
  my_put_in_list_camera(camera, init);
  return (EXIT_SUCCESS);
}

int	my_init_plan(char **buf)
{
  t_init	*init;
  t_plan	**plan;

  init = my_init_list(buf);
  my_put_in_list_plan(plan, init);
  return (EXIT_SUCCESS);
}

int	my_init_sphere(char **buf)
{
  t_init	*init;
  t_sphere	**sphere;

  init = my_init_list(buf);
  my_put_in_list_sphere(sphere, init);
  return (EXIT_SUCCESS);
}
