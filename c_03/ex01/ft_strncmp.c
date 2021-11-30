#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int id;

    id = 0;
    while((s1[id] != '\0' && s2[id] != '\0') && id < n)
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
    printf("%d\n", strncmp("123", "40", 2));
    printf("%d\n", strncmp("1234", "456", 1));
    printf("%d\n", strncmp("123", "123", 1));
    printf("%d\n\n", strncmp("129", "123", 1));

    printf("%d\n", ft_strncmp("123", "40", 2));
    printf("%d\n", ft_strncmp("1234", "456", 1));
    printf("%d\n", ft_strncmp("123", "123", 1));
    printf("%d\n", ft_strncmp("129", "123", 1));
    return (0);
}
