#include "libft/libft.h"
#include "ft_fprintf.c"

int main(int argc, char const *argv[])
{
	if (argc > 2)
	{
		if (ft_strcmp(argv[1], "test_s") == 0)
			ft_fprintf("test string replacement, test name: %s", argv[1]);
	}
	return 0;
}