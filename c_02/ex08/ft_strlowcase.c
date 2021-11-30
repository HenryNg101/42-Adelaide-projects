#include <stdio.h>
#include <unistd.h>

char *ft_strlowcase(char *str)
{
    int     id;

    id = 0;
    while(str[id] != '\0')
    {
        if (str[id] >= 'A' && str[id] <= 'Z')
        {
            str[id] += ' ';
        }
        id++;
    }
    return (str);
}

int main(void)
{
    char    a[100] = "AHjdws123";

    printf("%s", ft_strlowcase(a));
    return (0);
}
