// #include <stdlib.h>
// #include "libft.h"

// #include "libft.h"

// static int	wordcounter(const char *s, char c)
// {
// 	int	i;

// 	i = 0;
// 	while (*s)
// 	{
// 		while (*s == c && *s)
// 			s++;
// 		if (*s == '\0')
// 			return (i);
// 		while (*s != c && *s)
// 			s++;
// 		i++;
// 	}
// 	return (i);
// }

// static int	charcounter(const char *s, char c)
// {
// 	int	i;

// 	i = 0;
// 	while (*s && (*s != c))
// 	{
// 		i++;
// 		s++;
// 	}
// 	return (i);
// }


// int main ()
// {
// 	const char str[] = "merhaba dünya nasilsin merhaba";
// 	char c = ' ';
// 	printf("%s",(char *)ft_split(str, c));
// }