/*
** my_putstr.c for my_putstr.c in /home/boutel_a/rendu/Piscine-C-Jour_04
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Thu Oct  3 13:00:02 2013 boutel_a
** Last update Sun Nov 17 21:57:49 2013 boutel_a
*/

#include "my.h"

void	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
}
