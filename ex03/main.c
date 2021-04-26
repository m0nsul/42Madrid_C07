#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int	ft_strlen(char *str);

int		main(void)
{
	int		i;
	char	*sep;
	char	**strs;
	char	*result;

	strs = (char **)malloc(4 * sizeof(strs));
	strs[0] = "Hola";
	strs[1] = "mundo";
	strs[2] = "cruel";
	strs[3] = "!";
	sep = "____";
	i = 0;

	while (i < 4)
	{
		result = ft_strjoin(i + 1, strs, sep);
		printf("\nresult with size: %d : $%s$ size: %d\n", i + 1, result, ft_strlen(result));
		free (result);
		i++;
	}
	free (strs);
}
