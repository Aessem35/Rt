/*
** my_printf.c for my_printf in /home/boutel_a/rendu/PSU_2013_my_printf
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Sat Nov  9 16:15:59 2013 boutel_a
** Last update Sun Nov 17 22:34:08 2013 boutel_a
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

int	search_tab(const char *format, va_list va, int f)
{
  int	(*ptr_fn[12])(va_list);
  char	*modulo;
  int	o;

   o = 0;
  modulo = "dscxXopbui";
  ptr_fn[0] = &modulo_d;
  ptr_fn[1] = &modulo_s;
  ptr_fn[2] = &modulo_c;
  ptr_fn[3] = &modulo_xmin;
  ptr_fn[4] = &modulo_xmaj;
  ptr_fn[5] = &modulo_o;
  ptr_fn[6] = &modulo_p;
  ptr_fn[7] = &modulo_b;
  ptr_fn[8] = &modulo_u;
  ptr_fn[9] = &modulo_i;
  ptr_fn[10] = NULL;
  while (modulo[o] != format[f])
    o = o + 1;
  ptr_fn[o](va);
}

int	my_printf(const char *format, ...)
{
  int		f;
  int		s;
  va_list	va;

  f = 0;
  va_start(va, format);
  s = 0;
  while (format[s] != '\0')
    {
      if (format[s] == '%')
	{
	  if (format[s + 1] == '%')
	    my_putchar('%');
	  else
	    {
	      search_tab(format, va, s + 1);
     	      s = s + 2;
	    }
	}
      my_putchar(format[s]);
      s = s + 1;
    }
  va_end(va);
  return (s);
}


