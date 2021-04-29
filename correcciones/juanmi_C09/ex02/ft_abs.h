#ifndef FT_ABS_H
# define FT_ABS_H

int	ABS(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}

#endif