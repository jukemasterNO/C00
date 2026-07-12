#include <unistd.h>

void ft_print_comb(void)
{ 
    int a;
    int b;
    int c; 
    a = 0;
    while (a <= 7)
    {
        b = a + 1;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                if (a != 0 || b != 1 || c != 2)
                write(1, ", ", 2);
                char ac = a + '0';
                write (1, &ac, 1);
                char bc = b + '0';
                write(1, &bc, 1);
                char cc = c + '0';
                write(1, &cc, 1);
                c++;   
            }
        b++;
        }
    a++;
    }
}