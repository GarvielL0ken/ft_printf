#include <stdarg.h>
#include "libft/libft.h"

void	ft_printf(const char *format, ...)
{
	va_list lst;
	int		i;

	va_start(lst, format);
	if (format[0] != '%')
		ft_putchar(format[0]);
	i = 1;
	while (format[i] != '\0')
	{
		if (format[i - 1] == '%')
		{
			if (format[i] == 's')
				ft_putstr(va_arg(lst, char *));
			if (format[i] == '%')
				ft_putchar(format[i]);
		}
		else if (format[i] != '%')
			ft_putchar(format[i]);
		i++;
	}
}