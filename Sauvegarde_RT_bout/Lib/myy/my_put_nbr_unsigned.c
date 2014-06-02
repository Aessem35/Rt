/*
** my_put_nbr_unsigned.c for my_put_nbr_unsigned in /home/boutel_a/rendu/PSU_2013_my_printf/Lib/my
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Sat Nov 16 16:43:27 2013 boutel_a
** Last update Sun Nov 17 21:57:22 2013 boutel_a
*/

#include "my.h"

void	my_put_nbr_unsigned(unsigned nb)
{
  unsigned	d;
  unsigned	m;
  unsigned	n;

  d = 1;
  m = 0;
  n = nb;

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
