#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int check;
    int id;

    check = 1;
    id = 0;
    while(str[id] != '\0')
    {
        if (((str[id] < 'A') || ((str[id] > 'Z') && (str[id] < 'a'))) || (str[id] > 'z'))
        {
            check = 0;
        }
        id++;
    }
    return (check);
}

int main(void)
{
    printf("%d", ft_str_is_alpha("kdosoABJKJK"));
    return (0);
}
