/*
** my_getnbr.c for my_getnbr.c in /home/boutel_a/rendu/Piscine-C-Jour_04
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Tue Oct  8 08:48:09 2013 boutel_a
** Last update Mon Nov 11 14:46:51 2013 boutel_a
*/

int	my_getnbr(char *str)
{
  int	c;
  int	nb;
  int	n;

  n = 1;
  nb = 0;
  c = 0;
  while (str[c] == '+' || str[c] == '-')
    {
      if (str[c] == '-')
	{
	  n = n * -1;
	  c = c + 1;
	}
      else 
	c = c + 1;
    } 
  while (str[c] != '\0')
    {
      nb = nb * 10;
      nb = nb + (str[c] - 48); 
      c = c + 1;
    }
  return (nb * n);
}
