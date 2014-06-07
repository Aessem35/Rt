/*
** my_init_list2.c for my_init_list2 in /home/lair_f/rendu/Rt/conf_xml
**
** Made by lair_f
** Login   <lair_f@epitech.net>
**
** Started on  Fri Jun  6 22:31:54 2014 lair_f
** Last update Sat Jun  7 14:32:42 2014 lair_f
*/

#include "rt.h"

int	my_init_cylinder(char **buf)
{
  t_init	init;
  t_cylinder	*cylinder;

  cylinder = NULL;
  my_init_list(buf, &init);
  my_put_in_list_cylinder(&cylinder, &init);
  return (EXIT_SUCCESS);
}

int	my_init_cone(char **buf)
{
  t_init	init;
  t_cone	*cone;

  cone = NULL;
  my_init_list(buf, &init);
  my_put_in_list_cone(&cone, &init);
  return (EXIT_SUCCESS);
}

int	my_init_sdcone(char **buf)
{
  t_init	init;
  t_sdcone	*sdcone;

  sdcone = NULL;
  my_init_list(buf, &init);
  my_put_in_list_sdcone(&sdcone, &init);
  return (EXIT_SUCCESS);
}
