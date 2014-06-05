/*
** my_parse_xml.c for my_parse_xml in /home/lair_f/rendu/Rt/conf_xml
**
** Made by lair_f
** Login   <lair_f@epitech.net>
**
** Started on  Wed May 28 13:25:31 2014 lair_f
** Last update Tue Jun  3 11:56:42 2014 sainto_p
*/

#include "rt.h"

int	my_verif_buf(char *buf)
{
  if (strcmp(buf, "<!--") != 1)
    return (2);
  return (EXIT_FAILURE);
}

int	main(int ac, char **av)
{
  int	fd;
  char	*buf;

  if ((fd = open(av[1], (O_NOFOLLOW | O_RDONLY))) == -1)
    return (0);
  while ((buf = get_next_line(fd)) != NULL)
    {
      printf("%s\n", buf);
      if (my_verif_buf(buf) == EXIT_FAILURE)
	printf("Error in line : %s\n", buf);
      else if (my_verif_buf(buf) == 2);
      /*  else
	  my_putlist(buf);*/
    }
  return (0);
}
