#include "libft/libft.h"
#include <stdio.h>
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
