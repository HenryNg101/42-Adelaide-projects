#include <stdio.h>

char *ft_strncpy(char *dest, char *src, int n)
{
    int     id;

    id = 0;
    while((src[id] != '\0') && (id < n))
    {
        *(dest + id) = src[id];
        id++;
    }
    while(id < n)
    {
        *(dest + id) = '\0';
        id++;
    }
    *(dest + id) = '\0';
    return (dest);
}

int main(void)
{
    char a[] = "123";

    ft_strncpy(a, "fefwefggu", 6);
    printf("%s", a);
    return (0);
}
