#include <unistd.h>

void    ft_print_numbers(void)
{
    int nb;
    
    nb = '0';
    while(nb <= '9')
    {
        write(1, &nb, 1);
        nb++;
    }
    write(1, &"\n", 1);
}

int main()
{
    ft_print_numbers();
    return 0;
}
