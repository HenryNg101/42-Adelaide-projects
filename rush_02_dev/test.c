#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    int fd;
    char *content = (char *)malloc(1000 * sizeof(char));
    int file_size;

    fd = open("numbers.dict", O_RDONLY);
    file_size = read(fd, content, 1000);
    close(fd);

    printf("%s\n%d\n", content, file_size);

    printf("%d\n", atoi("\t\n\r\f\v1234ab567"));
    return (0);
}
