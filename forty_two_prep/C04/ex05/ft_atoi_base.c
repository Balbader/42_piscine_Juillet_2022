#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     ft_check_base(char c)
{
    if (c == '+' || c == '-' || c == ' ' || c == '\t' || c == '\n' || c == '\r'
            || c == '\v')
        return (0);
    return (1);
}

int     ft_base_position(char *base, char c)
{
    int     i;

    i = 0;
    while (i < ft_strlen(base))
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int     ft_base_is_ok(char *base)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    if (ft_strlen(base) < 2)
        return (0);
    while (base[i])
    {
        if (ft_check_base(base[i]))
            return (0);
        i++;
    }
    i = 0;
    while (base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int     ft_atoi_base(char *str, char *base)
{
    int i;
	int result;
	int sign;

	i = 0;
	sign = 1;
	result = 0;
	if (!ft_base_is_ok(base))
		return (0);
	while (ft_check_base(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_base_position(base, str[i]) != -1)
	{
		result = ft_base_position(base, str[i]) + result * ft_strlen(base);
		i++;
	}
	return (sign * result);
}

int main(void)
{
    char *str = "+++--++234890Hello my name is balou";
    char *base = "0123456789ABCDEF";

    printf("%d\n", ft_atoi_base(str, base));
    return (0);
}
