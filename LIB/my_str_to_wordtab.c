/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/boutel_a/rendu/Piscine-C-Fonction
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Fri Oct 18 20:01:53 2013 boutel_a
** Last update Sat Jan 11 21:50:44 2014 boutel_a
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int	nb_word(char *str)
{
  int	i;
  int	mots;

  i = 0;
  mots = 0;
  while (str[i] != '\0')
    {
      while (str[i] == ' ' && str[i] != '\0')
	i = i + 1;
      while (str[i] != ' ' && str[i] != '\0')
	{
	  i = i + 1;
	}
      mots = mots + 1;
    }
  return (mots);
}

char	**my_str_to_wordtab(char *str)
{
  int	s;
  char	**tab;
  int	c;
  int	key;
  int	p;
  int	doors;
  
  doors = 0;
  key = 0;
  s = 0;

  tab = malloc(sizeof(char *) * nb_word(str));
  while (str[s] != '\0')
    {
      if (my_str_isalpha_num2(str[s]))
	{
	  c = 0;
	  p = s;
	  while (str[p] && my_str_isalpha_num2(str[p]))
	    {
	      c = c + 1;
	      p = p + 1;
	    }
	  tab[key] = malloc(sizeof(char) * (c + 1));
	  while (str[s] && my_str_isalpha_num2(str[s]))
	    {
	      tab[key][doors] = str[s];
	      doors = doors + 1;
	      s = s + 1;
	    }
	  tab[key][doors] = '\0';
	  //	  my_putstr(tab[key]);
	  //	  my_putchar('\n');
	  key = key + 1;
	}
      doors = 0;
      s = s + 1;
    }
    tab[key] = NULL;
   return (tab);
}


