#include "ft_fts.h"
int main(int arg, char **argv)
{
	int 	i;
 	struct s_tab T1;
	char 	*file;
	char	*enun;
	char	*tab;
	char **tab_din;
	i = 1;
	while (i < arg)
	{
		if (!ft_file_exist(argv[i]))
		{
			file = ft_file_t_memo(argv[i]);
			enun = ft_split_enun(file);
			tab = ft_split_tab(file);
			if (!ft_check(enun, tab))
			{
				tab_din = ft_str_to_dinam(tab);
				ft_fill_struct(&T1, enun, tab);
				ft_solve_matrix(&T1, tab_din);
			}
		}
		i++;
	}
	return (0);
}