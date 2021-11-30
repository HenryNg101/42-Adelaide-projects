#include <stdio.h>
#include <unistd.h>

char *ft_strupcase(char *str)
{
    int     id;

    id = 0;
    while(str[id] != '\0')
    {
        if (str[id] >= 'a' && str[id] <= 'z')
        {
            str[id] -= ' ';
        }
        id++;
    }
    return (str);
}

int main(void)
{
    char    a[100] = "AHjdws123";

    printf("%s", ft_strupcase(a));
    return (0);
}
