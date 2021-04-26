#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("x  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("c  : strdup : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft : ft_strdup : $%s$ @ %p\n", allocated, allocated);
}
