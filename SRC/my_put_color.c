/*
** my_put_color.c for my_put_color in /home/boutel_a/rendu/MUL_2014_wolf3d
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Fri Jan 10 10:49:49 2014 boutel_a
** Last update Thu Feb 27 10:11:24 2014 boutel_a
*/

#include "rtv1.h"

t_color *my_put_color(t_color *c, int r, int g, int b)
{
  c->r = r;
  c->g = g;
  c->b = b;
  return (c);
}
