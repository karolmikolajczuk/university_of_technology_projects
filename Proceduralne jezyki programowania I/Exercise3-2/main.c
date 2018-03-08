#include <stdio.h>
int main ()
{
    float fahrenheit , celsius , lower , upper , step ;

    printf("Input lower: ");
    scanf("%f",&lower);

    printf("Input upper: ");
    scanf("%f",&upper);

    printf("Input step: ");
    scanf("%f",&step);

    for(fahrenheit = lower ; fahrenheit<=upper ; fahrenheit+=step){
        celsius = (5*(fahrenheit-32)/9);
        printf ("%8.2f\t%8.2f\n", fahrenheit, celsius);
    }

    return 0;
}
