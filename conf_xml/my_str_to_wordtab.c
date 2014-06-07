/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/lair_f/rendu/Rt/conf_xml
**
** Made by lair_f
** Login   <lair_f@epitech.net>
**
** Started on  Thu Jun  5 14:29:59 2014 lair_f
** Last update Sat Jun  7 17:13:09 2014 lair_f
*/

#include "rt.h"

int	my_nb_words(char *src)
{
  int	i;
  int	b;

  i = 0;
  b = 1;
  while (src[i] != '\n' && src[i] != ' ' && src[i] != '\t' && src[i])
    i++;
  while (src[i] != '\n' && src[i])
    {
      if (src[i] == ' ' || src[i] == '=')
	b++;
      i++;
    }
  return (b);
}

char	**my_str_word_tab(char *src, char **tab)
{
  int	i;
  int	x;
  int	y;

  i = 0;
  x = 0;
  y = 0;
  while (src[i] == ' ' || src[i] == '\t')
    i++;
  while (src[i] != '\n' && src[i])
    {
      if (src[i] == ' ' || src[i] == '=')
	{
	  tab[y][x] = '\0';
	  i++;
	  x = 0;
	  y++;
	}
      if (src[i])
	tab[y][x++] = src[i++];
    }
  return (tab);
}

char	**my_str_to_wordtab(char *src)
{
  char	**tab;
  int	len;
  int	nb;
  int	i;

  if (!src)
    return (NULL);
  nb = my_nb_words(src);
len = my_strlen(src);
  if ((tab = malloc(sizeof(char *) * (nb + 1))) == NULL)
    return (NULL);
  i = 0;
  while (i != nb)
    {
      if ((tab[i] = malloc(sizeof(char) * (len + 1))) == NULL)
	return (NULL);
      memset(tab[i], 0, len + 1);
      i++;
    }
  tab[nb] = NULL;
  tab = my_str_word_tab(src, tab);
  free(src);
  return (tab);
}
