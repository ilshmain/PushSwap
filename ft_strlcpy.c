#include "push_swap.h"

size_t    ft_strlen(const char *s)
{
    size_t    i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	k;

	k = 0;
	if (!src || !dst)
		return (0);
	if (dstsize > 0)
	{
		while (src[k] && k < dstsize - 1)
		{
			dst[k] = src[k];
			k++;
		}
		dst[k] = '\0';
		return (ft_strlen(src));
	}
	while (src[k])
		k++;
	return (ft_strlen(src));
}
