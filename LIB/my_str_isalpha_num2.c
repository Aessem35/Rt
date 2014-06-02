/*
** my_str_isalpha_num2.c for my_str_isalpha_num2.c in /home/boutel_a/rendu/Piscine-C-Fonction
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Fri Oct 18 21:06:03 2013 boutel_a
** Last update Fri Oct 18 21:16:01 2013 boutel_a
*/


int	my_str_isalpha_num2(char c)
{
  if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'z'
      || c >= '0' && c <= '9')
    return (1);
  return (0);
}
