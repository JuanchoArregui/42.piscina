#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
struct s_tab
{
	char	vacio;
	char	lleno;
	char	obstaculo;
	int		ancho;
	int		alto;
	int		lado;
	int		x0;
	int		y0;
};

void	ft_solve_casilla(int x0, int y0,char **tab, struct s_tab *T1);
void 	ft_solve_matrix(struct s_tab *T1, char **tab);
int		ft_es_imprimible(char caracter);
int		ft_son_distintos3(char a, char b, char c);
int		ft_es_distinto4(char a, char b, char c, char d);
int		ft_check_tablero_caracteres(char a, char b, char c, char *tablero);
int		ft_check_caracteres(char *firstline, char *tablero);
int		ft_check_nbr(char *firstline);
int		ft_check_tab(char *tablero);
int		ft_count_lines(char *tablero);
int		ft_check_e3(char *firstline, char *tablero);
int		ft_check(char *L1, char *tab);
int		ft_file_exist(char *file_name);
void	ft_file_t_array(char *file_name, char *dict);
char	*ft_file_t_memo(char *file_name);
void	ft_fill_struct (struct s_tab *T1, char *firstline, char *tab);
void	ft_fill(int x0, int y0, struct s_tab *T1, char **tab);
int		ft_min(int x, int y);
void	ft_print_matrix(int ancho, int alto, char **tab);
int		ft_read_height(char *firstline);
void	ft_splitt_enun(char *file, char *enun);
char	*ft_split_enun(char *file);
int		ft_strlen(char *str);
int		ft_strlen_mod(char *str);
char	*ft_split_tab(char *file);
void	ft_splitt_tab(char *file,	char *tab);
void	ft_putstr(char *str);
int		ft_max(int x, int y);
char	**ft_str_to_dinam(char *str);