/*
** my_put_nbr_base_xmin.c for my_put_nbr_base_xmin in /home/boutel_a/rendu/PSU_2013_my_printf/Lib/my
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Sat Nov 16 18:29:31 2013 boutel_a
** Last update Sun Nov 17 22:04:04 2013 boutel_a
*/

#include "my.h"

void	my_put_nbr_base_xmin(int nb, char *base)
{
  if (nb >= (my_strlen(base)))
    {
      my_put_nbr_base_xmin(nb / my_strlen(base), base);
      my_put_nbr_base_xmin(nb % my_strlen(base), base);
    }
  else if (nb >= 10)
    my_putchar(nb + 87);
  else 
    my_putchar(nb + 48);
}


