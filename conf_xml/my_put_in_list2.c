/*
** my_put_in_list2.c for my_put_in_list2 in /home/lair_f/rendu/Rt/conf_xml
**
** Made by lair_f
** Login   <lair_f@epitech.net>
**
** Started on  Thu Jun  5 16:20:10 2014 lair_f
** Last update Thu Jun  5 16:30:33 2014 lair_f
*/

#include "rt.h"

int	my_put_in_list_sdcone(t_sdcone **list, t_init *pt)
{
  t_sdcone	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (intmsg("Error malloc elem\n", EXIT_FAILURE));
  elem->next = NULL;
  elem->x = pt->x;
  elem->y = pt->y;
  elem->z = pt->z;
  elem->delta = pt->delta;
  elem->rayon = pt->rayon;
  elem->angle = pt->angle;
  while (*list && (*list)->next)
    (*list) = (*list)->next;
  if (*list != NULL)
    (*list)->next = elem;
  elem->prev = *list;
  if (elem->prev == NULL)
    *list = elem;
  while (*list && (*list)->prev)
    (*list) = (*list)->prev;
  return (EXIT_SUCCESS);
}
