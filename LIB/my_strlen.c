/*
** my_strlen.c for my_strlen.c in /home/boutel_a/rendu/Piscine-C-Jour_04
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Thu Oct  3 15:40:44 2013 boutel_a
** Last update Sun Nov 17 19:20:03 2013 boutel_a
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
    }
  return (a);
}


