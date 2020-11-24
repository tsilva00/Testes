#include <unistd.h>

void    replace(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac > 1)
    {
        replace(av[1]);
    }
    write(1, &"\n", 1);
    return (0);
}
