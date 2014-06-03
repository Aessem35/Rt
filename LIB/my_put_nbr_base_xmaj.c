/*
** my_put_nbr_base.c for my_put_nbr_base in /home/boutel_a/rendu/PSU_2013_my_printf/Sources
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Fri Nov 15 19:21:15 2013 boutel_a
** Last update Sun Nov 17 22:04:16 2013 boutel_a
*/

#include "my.h"

void	my_put_nbr_base_xmaj(int nb, char *base)
{
  if (nb >= my_strlen(base))
    {
      my_put_nbr_base_xmaj(nb / my_strlen(base), base);
      my_put_nbr_base_xmaj(nb % my_strlen(base), base);
    }
  else if (nb >= 10)
    my_putchar(nb + 55);
  else 
    my_putchar(nb + 48);
}


  
