/*
** my_puttab.c for my_puttab in /home/lair_f/rendu/Rt/conf_xml
**
** Made by lair_f
** Login   <lair_f@epitech.net>
**
** Started on  Thu Jun  5 14:56:09 2014 lair_f
** Last update Thu Jun  5 16:43:57 2014 lair_f
*/

#include "rt.h"

int	intmsg(char *str, int ret)
{
  my_putstr(2, str);
  return (ret);
}

void	my_putchar(int fd, char c)
{
  write(fd, &c, 1);
}

void	my_putstr(int fd, char *str)
{
  int	i;

  i = -1;
  while (str[++i])
    my_putchar(fd, str[i]);
}

void	my_puttab(int fd, char **tab)
{
  int	i;

  if (!tab)
    return;
  i = 0;
  while (tab[i])
    {
      my_putstr(fd, tab[i++]);
      my_putchar(fd, '\n');
    }
  my_putchar(fd, '\n');
}
