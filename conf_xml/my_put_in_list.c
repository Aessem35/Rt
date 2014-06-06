/*
** my_put_in_list.c for my_put_in_list in /home/lair_f/rendu/Rt/conf_xml
**
** Made by lair_f
** Login   <lair_f@epitech.net>
**
** Started on  Thu Jun  5 16:04:17 2014 lair_f
** Last update Fri Jun  6 22:35:23 2014 lair_f
*/

#include "rt.h"

int	my_put_in_list_camera(t_camera **list, t_init *pt)
{
  t_camera	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (intmsg("Error malloc elem\n", EXIT_FAILURE));
  elem->next = NULL;
  elem->x = pt->x;
  elem->y = pt->y;
  elem->z = pt->z;
  elem->fov = pt->fov;
  elem->lookAtX = pt->lookAtX;
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

int	my_put_in_list_plan(t_plan **list, t_init *pt)
{
  t_plan	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (intmsg("Error malloc elem\n", EXIT_FAILURE));
  elem->next = NULL;
  elem->x = pt->x;
  elem->y = pt->y;
  elem->z = pt->z;
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

int	my_put_in_list_sphere(t_sphere **list, t_init *pt)
{
  t_sphere	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (intmsg("Error malloc elem\n", EXIT_FAILURE));
  elem->next = NULL;
  elem->x = pt->x;
  elem->y = pt->y;
  elem->z = pt->z;
  elem->delta = pt->delta;
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

int	my_put_in_list_cylinder(t_cylinder **list, t_init *pt)
{
  t_cylinder	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (intmsg("Error malloc elem\n", EXIT_FAILURE));
  elem->next = NULL;
  elem->x = pt->x;
  elem->y = pt->y;
  elem->z = pt->z;
  elem->delta = pt->delta;
  elem->rayon = pt->rayon;
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

int	my_put_in_list_cone(t_cone **list, t_init *pt)
{
  t_cone	*elem;

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
