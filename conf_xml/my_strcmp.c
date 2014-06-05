/*
** my_strcmp.c for my_strcmp in /home/lair_f/rendu/Rt/conf_xml
**
** Made by lair_f
** Login   <lair_f@epitech.net>
**
** Started on  Thu Jun  5 13:55:54 2014 lair_f
** Last update Thu Jun  5 14:24:40 2014 lair_f
*/

#include "rt.h"

int	my_strlen(char *str)
{
  int	i;

  i = -1;
  while (str[++i]);
  return (i);
}

int     my_strcmp(char *str1, char *str2)
{
  int   i;

  i = 0;
  if (!str1 || !str2)
    return (-1);
  if (my_strlen(str1) != my_strlen(str2))
    return (my_strlen(str1) - my_strlen(str2));
  while (str1[i] && str2[i])
    {
      if (str1[i] != str2[i])
	return (1);
      i++;
    }
  return (0);
}
