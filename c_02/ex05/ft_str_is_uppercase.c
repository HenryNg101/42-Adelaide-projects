#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int check;
    int id;

    check = 1;
    id = 0;
    while(str[id] != '\0')
    {
        if (str[id] < 'A' || str[id] > 'Z')
        {
            check = 0;
        }
        id++;
    }
    return (check);
}

int main(void)
{
    printf("%d", ft_str_is_lowercase("hjqwehjH"));
    return (0);
}
