/*
** my_put_nbr_base_oct.c for my_put_nbr_base_oct in /home/boutel_a/rendu/PSU_2013_my_printf/Sources
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Sat Nov 16 11:08:52 2013 boutel_a
** Last update Sun Nov 17 22:15:54 2013 boutel_a
*/

#include "my.h"

void	my_put_nbr_base_oct(unsigned int nb, char *base)
{
  unsigned int	nb2;

  nb2 = my_strlen(base);
  if (nb >= nb2)
    {
      my_put_nbr_base_oct(nb / my_strlen(base), base);
      my_put_nbr_base_oct(nb % my_strlen(base), base);
    }
  else if (nb >= 10)
    my_putchar(nb + 48);
  else
    my_putchar(nb + 48);
}


