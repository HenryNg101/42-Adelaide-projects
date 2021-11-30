#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int id;

    id = 0;
    while(s1[id] != '\0' && s2[id] != '\0')
    {
        if (s1[id] != s2[id])
        {
            if (s1[id] < s2[id])
            {
                return (-1);
            }
            else if (s1[id] > s2[id])
            {
                return (1);
            }
        }
        id++;
    }
    return (0);
}


int main(void)
{
    printf("%d\n", strcmp("123", "40"));
    printf("%d\n", strcmp("1234", "456"));
    printf("%d\n", strcmp("123", "123"));
    printf("%d\n\n", strcmp("129", "123"));

    printf("%d\n", ft_strcmp("123", "40"));
    printf("%d\n", ft_strcmp("1234", "456"));
    printf("%d\n", ft_strcmp("123", "123"));
    printf("%d\n", ft_strcmp("129", "123"));
    return (0);
}
