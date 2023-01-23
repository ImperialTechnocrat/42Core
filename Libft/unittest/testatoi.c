#include "../ft_atoi.c"
#include <stdio.h>

void    testatoi(void)
{
    printf("TESTATOI: %d:%d\n", ft_atoi("    ----+++4545ftg"), atoi("    ----+++4545ftg"));
    printf("TESTATOI: %d:%d\n", ft_atoi("    -15ftg"), atoi("    -15ftg"));
    printf("TESTATOI: %d:%d\n", ft_atoi("    +4545ftg"), atoi("    +4545ftg"));
    printf("TESTATOI: %d:%d\n", ft_atoi("ftg"), ft_atoi("ftg"));
}
