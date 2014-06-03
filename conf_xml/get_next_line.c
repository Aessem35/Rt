/*
** get_next_line.c for get_next_line in /home/lair_f/rendu/Rt/conf_xml
**
** Made by lair_f
** Login   <lair_f@epitech.net>
**
** Started on  Mon Jun  2 16:01:05 2014 lair_f
** Last update Mon Jun  2 17:03:07 2014 lair_f
*/


#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "rt.h"

char	*get_next_line(const int fd)
{
  static char	*buff_char;
  char		buff[BUFF_SIZE + 1];
  char		*str;
  int		i;

  if ((str = get_buff(buff_char, &i, fd)) == NULL)
    return (NULL);
  if (buff_char != NULL && buff_char[i] == '\n')
    return (str);
  while ((i = read(fd, buff, BUFF_SIZE)) != 0)
    {
      if (i < 0)
	return (NULL);
      buff[i] = 0;
      i = 0;
      while (buff[i++] != 0)
	if (buff[i - 1] != '\n')
	  str = copy_in_str(str, buff[i - 1]);
	else if (buff[i - 1] == '\n')
	  if ((buff_char = my_strdup_cpy(buff_char, buff)))
	    return (str);
    }
  if (i == 0 && str[0] == 0)
    return (NULL);
  return (str);
}

char	*get_buff(char *buff_char, int *i, int fd)
{
  char	*str;

  str = malloc(sizeof(*str));
  if (str == NULL || fd < 0)
    return (NULL);
  str[0] = 0;
  if (buff_char != NULL)
    {
      *i = 0;
      while (buff_char[*i] != '\n' && buff_char[*i] != 0)
	*i = *i + 1;
      if (buff_char[*i] == '\n')
	{
	  buff_char[*i] = 'X';
	  *i = *i + 1;
	}
      while (buff_char[*i] != '\n' && buff_char[*i] != 0)
	{
	  str = copy_in_str(str, buff_char[*i]);
	  *i = *i + 1;
	}
    }
  return (str);
}

char    *copy_in_str(char *sent, char to_add)
{
  char  *dest;
  int   length;
  int   i;

  i = 0;
  if (sent == NULL)
    length = 0;
  else
    length = strlen(sent);
  dest = malloc(sizeof(char) * (length + 2));
  if (dest == NULL)
    return (NULL);
  if (sent != NULL)
    {
      while (sent[i] != 0)
        {
          dest[i] = sent[i];
          i = i + 1;
        }
      free(sent);
    }
  dest[i] = to_add;
  dest[++i] = 0;
  return (dest);
}

char    *my_strdup_cpy(char *dest, char *to_copy)
{
  int   i;

  if (dest != NULL)
    free(dest);
  i = strlen(to_copy);
  dest = malloc(sizeof(*dest) * (i + 1));
  if (dest == NULL)
    return (NULL);
  i = 0;
  while (to_copy[i] != 0)
    {
      dest[i] = to_copy[i];
      i = i + 1;
    }
  dest[i] = 0;
  return (dest);
}
