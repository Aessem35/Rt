/*
** my.h for my.h in /home/boutel_a/rendu/PSU_2013_my_printf/Include
** 
** Made by boutel_a
** Login   <boutel_a@epitech.net>
** 
** Started on  Sun Nov 17 19:30:24 2013 boutel_a
** Last update Sun Mar 16 22:09:53 2014 boutel_a
*/

#ifndef MY_H_
# define MY_H_
#include <stdarg.h>
#include "rtv1.h"

void	my_putchar(char c);

int	my_isneg(int nb);

void     my_put_nbr(int nb);

void	my_put_nbr_unsigned(unsigned nb);

int	my_swap(int *a, int *b);

void	my_putstr(char *str);

int	my_strlen(char *str);

int	my_getnbr(char *str);

void	my_sort_int_tab(int *tab, int size);

int	my_power_rec(int nb, int power);

int	my_square_root(int nb);

int	my_is_prime(int nombre);

int	my_find_prime_sup(int nb);

char	*my_strcpy(char *dest, char *src);

char	*my_strncpy(char *dest, char *src, int nb);

char	*my_revstr(char *str);

char	*my_strstr(char *str, char *to_find);

int	my_strcmp(char *s1, char *s2);

int	my_strncmp(char *s1, char *s2, int nb);

char	*my_strupcase(char *str);

char	*my_strlowcase(char *str);

char	*my_strcapitalize(char *str);

int	my_str_isalpha(char *str);

int	my_str_isnum(char *str);

int	my_str_islower(char *str);

int	my_str_isupper(char *str);

int	my_str_isprintable(char *str);

int	my_showstr(char *str);

int	my_showmem(char *str, int size);

char	*my_strcat(char *dest, char *src);

char	*my_strncat(char *dest, char *src, int nb);

int	my_strlcat(char *dest, char *src, int size);

int	modulo_d(va_list va);

int	modulo_s(va_list va);

int	modulo_c(va_list va);

int	modulo_u(va_list va);

int	modulo_xmin(va_list va);

int	modulo_xmaj(va_list va);

int	modulo_o(va_list va);

int	modulo_p(va_list va);

int	modulo_b(va_list va);

int	modulo_i(va_list va);

int	modulo_a(va_list va);

void	my_put_nbr_base_oct(unsigned int nb, char *base);

void	my_put_nbr_base_bin(int nb, char *base);

void	my_put_nbr_base_xmin(int nb, char *base);

void	my_put_nbr_base_xmaj(int nb, char *base);

void	my_put_nbr_base_hex(long nb, char *base);

int     my_printf(const char *format, ...);

int	my_put_pixel_to_image(t_mlx *p, t_color *c, int x, int y);

void	my_put_pixel_to_image_retro(t_mlx *p, t_color *c, int x, int y);

t_color	*my_put_color(t_color *c, int r, int g, int b);

float	my_inter_sphere(t_int *h);

float	my_inter_plan(t_int *h);

float	my_check_k(t_int *h);

int	my_light(t_int *h, t_mlx *p, t_lum *l);

int	my_display_light(t_int *h, t_color *c);

int	my_light_plan(t_int *h, t_mlx *p, t_lum *l, float kp);

#endif 
