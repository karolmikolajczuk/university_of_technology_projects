#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    printf("a=%d b=%d c=%d\n",a,b,c);

    int delta =((b*b)-(4*a*c));
    printf("delta=%d",delta);

    if(delta<0){
        printf("Delta is lower than 0. Sorry.\n");
        return -1;
    }

    float square_delta = sqrt(delta);
    float x1 =((-b-square_delta)/(2*a));
    float x2 =((-b+square_delta)/(2*a));
    printf("sqrt(delta)=%f x1=%f x2=%f\n",square_delta,x1,x2);

    return 0;
}
