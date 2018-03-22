#include <stdio.h>
#include <stdlib.h>

int suma(int x, int y, int z){
    return x + y + z;
}

int main()
{
    int a, b, c , d;
    d=0;
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    d = suma(a,b,c);

    printf("The sum of %d and %d and %d is: %d.\n",a,b,c,d);
    return 0;
}
