/*
** my_put_nbr_base_hex.c for my_put_nbr_base_hex in /home/boutel_a/rendu/PSU_2013_my_printf/Lib/my
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Sat Nov 16 18:22:32 2013 boutel_a
** Last update Tue Nov 26 18:59:43 2013 boutel_a
*/

#include "my.h"

void	my_put_nbr_base_hex(long nb, char *base)
{
  if (nb >= (my_strlen(base)))
    {
      my_put_nbr_base_hex(nb / my_strlen(base), base);
      my_put_nbr_base_hex(nb % my_strlen(base), base);
    }
  else if (nb >= 10)
    my_putchar(nb + 87);
  else
    my_putchar(nb + 48);
}
