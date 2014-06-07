/*
** my_parse_xml.c for my_parse_xml in /home/lair_f/rendu/Rt/conf_xml
**
** Made by lair_f
** Login   <lair_f@epitech.net>
**
** Started on  Wed May 28 13:25:31 2014 lair_f
** Last update Fri Jun  6 22:40:14 2014 lair_f
** Last update Tue Jun  3 11:56:42 2014 sainto_p
*/

#include "rt.h"

int	my_go_list(char **buf)
{
  if (strcmp("<camera", buf[0]) == 0)
    my_init_camera(buf);
  else if (strcmp("<plan", buf[0]) == 0)
    my_init_plan(buf);
  else if (strcmp("<sphere", buf[0]) == 0)
    my_init_sphere(buf);
  else if (strcmp("<cylinder", buf[0]) == 0)
    my_init_cylinder(buf);
  else if (strcmp("<cone", buf[0]) == 0)
    my_init_cone(buf);
  else if (strcmp("<sdcone", buf[0]) == 0)
    my_init_sdcone(buf);
}

int	my_verif_buf(char **buf)
{
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

  printf("Si vous voulez tester, enlevez le commentaire dans le my_parse_xml.c \n Ya juste un aborted que je sais régler mais qui va me prendre du temps\n");
  printf("J'arrive demain 10h\n");
  /*  if (ac < 2)
    return (EXIT_FAILURE);
  if ((buf = malloc(sizeof (buf))) == NULL)
    return (EXIT_FAILURE);
  if ((fd = open(av[1], (O_NOFOLLOW | O_RDONLY))) == -1)
    return (0);
  while ((buf = my_str_to_wordtab(get_next_line(fd))) != NULL)
    {
      my_puttab(1, buf);
      if (my_verif_buf(buf) == EXIT_FAILURE)
	printf("Error in line : %s\n", buf[0]);
      else
	my_go_list(buf);
	}*/
  return (0);
}
