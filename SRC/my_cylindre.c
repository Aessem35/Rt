/*
** my_cylindre.c for my_cylindre.c in /home/boutel_a/rendu/MUL_2013_rtv1/Sources
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Sun Mar 16 22:41:19 2014 boutel_a
** Last update Sun Mar 16 22:58:08 2014 boutel_a
*/

#include <math.h>
#include "rtv1.h"
#include "my.h"

float	my_cylindre(t_int *h, t_mlx *p, t_cyl *g)
{
  float	cylx;
  float cyly;
  float cylz;
  float	rayon;
  float	cylf;
  float po1;
  float po2;

  rayon = 100;
  cylx = pow(h->vx, 2) + pow(h->vy, 2);
  cyly = 2 * ((h->xoeil * h->vx) + (h->yoeil * h->vy));
  cylz = pow(h->xoeil, 2) + pow(h->yoeil, 2) - pow(rayon, 2);
  cylf = pow(cyly, 2) - 4 * cylx * cylz;
  if (cylf < 0.0)
    return (-1.0);
  else
    {
      po1 = ((-cyly + sqrt(cylf)) / (2 * cylx));
      po2 = ((-cyly - sqrt(cylf)) / (2 * cylx));
      if (po1 < po2)
	my_put_pi
      return (po2);
    }
}
