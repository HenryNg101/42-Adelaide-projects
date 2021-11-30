#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int     id;
    char    prev;

    id = 0;
    while(str[id] != '\0')
    {
        if (str[id] >= 'a' && str[id] <= 'z')
        {
            if (prev == ' ' || id == 0)
            {
                str[id] -= ' ';
            }
        }
        prev = str[id];
        id++;
    }
    return (str);
}

int main(void)
{
    char    a[100] = "AHj dws fdjkbqj ? 123";

    printf("%s", ft_strcapitalize(a));
    return (0);
}
