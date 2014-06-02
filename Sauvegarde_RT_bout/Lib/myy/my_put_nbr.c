/*
** my_put_nbr.c for my_put_nbr.c in /home/boutel_a/rendu/Piscine-C-Jour_03
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Fri Oct  4 16:11:18 2013 boutel_a
** Last update Sun Nov 17 21:53:55 2013 boutel_a
*/

#include "my.h"

void	my_put_nbr(int nb)
{
  int	d;
  int	m;
  int	n;

  d = 1;
  m = 0;
  n = nb;
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
      n = nb;
    }
  while (nb > 9)
    {
      nb = nb / 10;
      d = d * 10;
    }
  while (d != 0)
    {
      m = n / d;
      m = m % 10;
      d = d / 10;
      my_putchar('0' + m);
    }
}

