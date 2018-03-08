#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=0,sum=0;

    for(;counter<=100;counter++){
        sum=sum+counter;
    }

    printf("%d",sum);

    return 0;
}
