/*
** my_parse_xml.c for my_parse_xml in /home/lair_f/rendu/Rt/conf_xml
**
** Made by lair_f
** Login   <lair_f@epitech.net>
**
** Started on  Wed May 28 13:25:31 2014 lair_f
<<<<<<< HEAD
** Last update Thu Jun  5 16:32:17 2014 lair_f
=======
** Last update Tue Jun  3 11:56:42 2014 sainto_p
>>>>>>> 040eff8c5def50702a3365fb957056beb875190c
*/

#include "rt.h"

int	my_verif_buf(char **buf)
{
  int	i;

  i = -1;
  if (strcmp("<camera" , buf[0]) == 0 || strcmp("<sphere" , buf[0]) == 0
      || strcmp("<plan" , buf[0]) == 0 || strcmp("<cylinder" , buf[0]) == 0
      || strcmp("<cone" , buf[0]) == 0)
    return (EXIT_SUCCESS);
  return (EXIT_FAILURE);
}

int	main(int ac, char **av)
{
  int	fd;
  char	**buf;

  if ((buf = malloc(sizeof (buf))) == NULL)
    return (EXIT_FAILURE);
  if ((fd = open(av[1], (O_NOFOLLOW | O_RDONLY))) == -1)
    return (0);
  while ((buf = my_str_to_wordtab(get_next_line(fd))) != NULL)
    {
      if (my_verif_buf(buf) == EXIT_FAILURE)
	printf("Error in line : %s\n", buf[0]);
      else;
    }
  return (0);
}
