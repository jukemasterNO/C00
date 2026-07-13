#include <unistd.h>

void    ft_is_negative(int n)
{
        char    status;

        if (n >= 0)
        {
                status = 'P';
        }
        else
        {
                status = 'N';
        }
        write (1, &status, 1);
}

int     main(void)
{
        ft_is_negative(1);
}
