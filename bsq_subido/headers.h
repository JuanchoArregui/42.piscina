#ifndef FT_BSQ_H
#define FT_BSQ_H
#define BUFFER_SIZE	32768
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
char	*ft_stdin(int file);
int		ft_isnumeric(char c);
int		ft_isprintable(char c);
int		fn_map_check_open(char *map_path);
int		fn_map_check_valid(int *map_key, char *str_map);
int		fn_map_check_valid2(int *map_key, int length_chars, char *str_map);
char	*fn_map_read(int file);
void	fn_strtomap(int *map_key, char *str_map);

#endif
