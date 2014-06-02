/*
** gere_key.c for  in /home/sainto_p/rendu/MUL_2013_rtv1/src
** 
** Made by sainto_p
** Login   <sainto_p@epitech.net>
** 
** Started on  Sun Mar 16 19:25:34 2014 sainto_p
** Last update Sun Mar 16 20:43:51 2014 sainto_p
*/

#include "rtv1.h"

int     my_key_hook(int keycode, void *param)
{
  (void)(param);
  if (keycode == ECHAP)
    exit(0);
  return (0);
}
