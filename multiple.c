#include <stdio.h>

int solution(int nb)
{
    int count;
    
    count = 0;
    if(nb >0)
    {
    while(nb>=0)
    {
        nb--;
        if(nb%3==0 || nb%5==0 || nb%3==0 && nb%5==0)
        {
            count+=nb;
        }
    }
    return count;
    }
    else
    {
        return 0;
    }
}


int main()
{
    printf("%i", solution(10));
    
    return 0;
}
