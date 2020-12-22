#include <unistd.h>
#include <stdio.h>

int is_prime(int nb)
{
    int sum;
    int divisor;
    
    sum = 0;
    divisor=1;
    while(divisor<=nb)
    {
        if(nb%divisor == 0)
        {
            sum+=1;
        }
        divisor++;
    }
    if(sum == 2)
    {
        return(nb);
    }
    else
    return 0;
}

int add_sum(int n)
{
    int add;
    
    add = 0;
    while(n > 0)
    {
        is_prime(n);
        add+=is_prime(n);
        n--;
    }
    return(add);
}

int main()
{
    printf("%i", add_sum(5));
    
    return 0;
}
