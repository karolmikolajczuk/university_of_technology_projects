#include <stdio.h>
#include <stdlib.h>

void suma2(int g, int x, int y, int* z){
    *z = x + y + g;
}

int main()
{
    int a,b,c,d;
    d=0;
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    suma2(a,b,c,&d);
    printf("The sum of %d and %d and %d is: %d",a,b,c,d);

    return 0;
}


//if delete &d and *z the sum will be 0.
