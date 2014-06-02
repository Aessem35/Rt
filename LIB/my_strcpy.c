/*
** my_strcpy.c for my_strcpy.c in /home/boutel_a/rendu/Piscine-C-Jour_06
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Mon Oct  7 06:55:53 2013 boutel_a
** Last update Sun Nov 17 19:19:47 2013 boutel_a
*/

#include "my.h"

char	*my_strcpy(char *dest, char *src)
{
  int	f;
  int	a;
  int	b;

  a = 0;
  b = 0;
  f = my_strlen(src);
  while (a != f || b != f)
  {
    dest[a] = src[b];
    a = a + 1;
    b = b + 1;
  }
  return (dest);
}

