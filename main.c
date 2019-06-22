#include "libft/libft.h"
#include "ft_printf.c"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	wchar_t	*wstr;
	int		i;

	wstr = (wchar_t *)malloc(27 * sizeof(wchar_t));
	i = 0;
	while (i < 26)
	{
		wstr[i] = (wchar_t)(i + 'a');
		i++;
	}
	wstr[i] = '\0';
	if (argc >= 2)
	{
		if (ft_strcmp(argv[1], "test_s") == 0)
			ft_printf("test string replacement, test name: %s\n", argv[1]);
		else if (ft_strcmp(argv[1], "test_S") == 0)
			printf("printf() = %S", wstr);
		else if (ft_strcmp(argv[1], "test_p") == 0)
			printf("pointer?");
		else if (ft_strcmp(argv[1], "test_percent") == 0)
			ft_printf("ft_printf(double percent) == %%\n");
	}
	return 0;
}