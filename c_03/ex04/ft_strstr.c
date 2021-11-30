#include <string.h>
#include <stdio.h>

int main(void)
{
    char b[] = "123";
    char a[] = "fwerfw123456";
    printf("%s\n", strstr(a, b));
    return (0);
}
