#ifndef RUSH02_H
# define RUSH02_H

#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/uio.h>
#include<sys/types.h>
#include<stdio.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_parse_dict(char *str);
void	print_number(char *str);
void	putstr(char *str);
void	print_separator(int j);
char	*create_number(int j);
char	*get_nb_from_pipe(void);
void	ft_go_to_next_line(int *fd, int *i);
void	ft_error(void);
void	comp_str_dict(int len);
void	ft_remove_start_zeros(char* str_nb, int nb, int str_length);
int		ft_realloc(char **str, char sign);
void	ft_print_separator_with_space(int j);

int		check_input_args(int argc);
int		check_number_value(char* str_nb, int str_length, int left_zeros);
int		check_input_number(char *str_nb);
char	*get_dict_name_path(int argc, char **argv);
int		check_open_dict(char *dict_name_path);

void	putstr(char *str);
void	div_string(int *i, char *str, char *argv, int *l);
void	print_words(int i, char **argv, char *str);

#endif
