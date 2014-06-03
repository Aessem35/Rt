/*
** my_put_nbr_base_bin.c for my_put_nbr_base_bin in /home/boutel_a/rendu/PSU_2013_my_printf/Sources
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Sat Nov 16 11:15:55 2013 boutel_a
** Last update Sun Nov 17 22:03:33 2013 boutel_a
*/

#include "my.h"

void	my_put_nbr_base_bin(int nb, char *base)
{
  if (nb >= my_strlen(base))
    {
      my_put_nbr_base_bin(nb / my_strlen(base), base);
      my_put_nbr_base_bin(nb % my_strlen(base), base);
    }
  else if (nb >= 10)
    my_putchar(nb + 48);
  else 
    my_putchar(nb + 48);
}


