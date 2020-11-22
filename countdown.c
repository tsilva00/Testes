#include <unistd.h>
#include <stdio.h>

int main()
{
    int nb;
    
    nb = '9';
    while(nb >= '0')
    {
        write(1, &nb, 1);
        nb--;
    }
    write(1, &"\n", 1);
    return (0);
    
}
