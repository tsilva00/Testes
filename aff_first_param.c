#include <unistd.h>
#include<stdio.h>

void first(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        if(str[i+1] == ' ')
        {
            break;
        }
        i++;
    }
    write(1, &"\n", 1);
}

int main(int argc, char **argv)
{
    if(argc < 1)
    {
        write(1, &"\n", 1);
    }
    first(argv[1]);
    return (0);
}
