#include <unistd.h>
#include "ft_strlen.c"

void ft_putendl_fd(char *s, int fd)
{
    int len;

    if (s == NULL)
        return;
    len = ft_strlen(s);
    write(fd, s, len);
    write(fd, "\n", 1);
}

