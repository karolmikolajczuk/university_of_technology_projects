#include <stdio.h>
#include <stdlib.h>

int the_sum()
{
    int i=0,sum=0;
    for(;i<=200;i+=2)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    printf("Sum: %d\n",the_sum());
    return 0;
}
