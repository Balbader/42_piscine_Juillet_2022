#include <unistd.h>
#include <stdio.h>

int     ft_atoi(char *str);

int     main(void)
{
    char    str[] = "  ---+--+13425Hel9890lo World.";
    printf("%d", ft_atoi(str));
    return (0);
}

int     ft_atoi(char *str)
{
    int     i; 
    int     res;
	int     sign;

    i = 0; // Initialize index of first digit
    res = 0; // Initialize result
    sign = 0; // Initialize sign as negative

    /* if str starts with an arbitrary amount of white-space chatacter */
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		str++;

    /* if str is followed by an arbitrary amount of + and - signs */
	while (str[i] == '-' || str[i] == '+')
		
        /* change int sign based on the number of - and if that number is even or odd */
		if (str[i++] == '-')
			sign = 1 - sign;
	
	/* if str is followed by number of the base 10 */
	while (str[i] >= '0' && str[i] <= '9')
    	{
		res = res * 10 + str[i] - '0';
        	i++;
    	}
   	return (sign * (res * -1));
}
