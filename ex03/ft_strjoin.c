#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i_src;
	int	i_dest;

	i_src = 0;
	i_dest = 0;
	while (dest[i_dest++])
		;
	i_dest--;
	while (src[i_src])
		dest[i_dest++] = src[i_src++];
	dest[i_dest] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		size_total;
	char	*dst;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	size_total = 0;
	i = -1;
	while (++i < size)
		size_total += ft_strlen(strs[i]) + ft_strlen(sep);
	size_total -= ft_strlen(sep);
	dst = (char *)malloc((size_total) * sizeof(char));
	i = 0;
	while (i < size_total)
		dst[i++] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(dst, strs[i]);
		if (i != size - 1)
			ft_strcat(dst, sep);
		i++;
	}
	return (dst);
}
