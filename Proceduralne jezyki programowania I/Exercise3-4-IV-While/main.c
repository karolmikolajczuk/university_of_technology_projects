#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=0,sum=0;
    while(counter<=100){
        sum=sum+counter;
        counter++;
    }
    printf("%d",sum);
    return 0;
}
