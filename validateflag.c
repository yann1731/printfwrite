#include "libft.h"
#include "ft_printf.h"

int	validateflag(int c)
{
	if (c != 'c' && c != 's' && c != 'd' && c != 'i' && c != 'u' &&
		c != 'p' && c != 'x' && c != 'x' && c != 'X' && c != '%')
		return (0);
	return (1);
}
