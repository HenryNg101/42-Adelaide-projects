#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int id_dest;
    int id_src;

    id_dest = 0;
    id_src = 0;
    while(dest[id_dest] != '\0')
    {
        id_dest++;
    }
    while(src[id_src] != '\0')
    {
        dest[id_dest] = src[id_src];
        id_dest++;
        id_src++;
    }
    dest[id_dest] = '\0';
    return (dest);
}

int main(void)
{
    char a[] = "123";
    printf("%s\n", strncat(a, "321", 2));
    printf("%s\n", ft_strcat(a, "321"));
    return (0);
}
