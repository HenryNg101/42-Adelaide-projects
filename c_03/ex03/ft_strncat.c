#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int id_dest;
    unsigned int id_src;

    id_dest = 0;
    id_src = 0;
    while(dest[id_dest] != '\0')
    {
        id_dest++;
    }
    while(src[id_src] != '\0' && id_src < nb)
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
    printf("%s\n", ft_strncat(a, "321", 1));
    return (0);
}
