#ifndef HEADERS_H
#define HEADERS_H
#define BUFFER_SIZE	32768

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_stdin(int file);

int		fn_map_check_open(char *map_path);
int		fn_map_check_valid(char *str_map);
void	fn_map_print(unsigned int **map_array);
char	*fn_map_read(int file, char *argv);

#endif
