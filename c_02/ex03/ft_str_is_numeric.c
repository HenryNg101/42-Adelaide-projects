#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int check;
    int id;

    check = 1;
    id = 0;
    while(str[id] != '\0')
    {
        if (str[id] < '0' || str[id] > '9')
        {
            check = 0;
        }
        id++;
    }
    return (check);
}

int main(void)
{
    printf("%d", ft_str_is_numeric("3489124789"));
    return (0);
}
