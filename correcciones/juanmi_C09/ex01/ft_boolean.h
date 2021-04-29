#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef int	t_bool;

# define SUCCESS 0
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have a pair number of arguments.\n"
# define ODD_MSG "I have an impair number of arguments.\n"

t_bool	EVEN(int X)
{
	if ((X % 2) == 0)
		return (FALSE);
	else
		return (TRUE);
}

#endif