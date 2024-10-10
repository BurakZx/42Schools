#include "libft\libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *src, char c)
{
	while (src && *src != c)
		src++;
	return src;
}
char	*ft_strrchr(char *src, int c)
{
	unsigned int	i;

	i = strlen(src) - 1;
	while (src[i] != c && i != 0)
		i--;
	if (!i)
	{
		if(src[i] == c)
			return (src);
		else
			return NULL;
	}
	return (src + i);
}
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1++ == *s2++)
	{
		if (n-- == 1)
			return (*--s1 - *--s2);
	}
	return (*--s1 - *--s2);
}


int main(void)
{
    printf("\n\n");
	printf("%s\n\n",ft_strchr("merhabalar",'m'));
	printf("%s\n\n",ft_strrchr("s",'g'));
	printf("%d\n\n",ft_strncmp("qwegtyt","qwegtt",8));

	int as = 0;
	while (++as < 10){
		printf("%d ",as);

	}
	char *a = "aaaaaaaaaaaaab";
	printf("blob%d\n",as);
	while(*a == 97 && *++a == 97);
	printf("%s",a);
}














/*
int	ft_atoi(char *s)
{
	unsigned char sign;
	int result;
	result = 0;

	sign = 1;
	if(*s++ == '-')
		sign = 0;

	while(*s && (*s >= 48 && *s <=57))
		result = result * 10 + (*s++ - 48);

	return (sign ? result : -result);
}
*/
