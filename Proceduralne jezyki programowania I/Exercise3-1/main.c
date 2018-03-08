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

    fahrenheit = lower ;

    while (fahrenheit<=upper) {
        celsius = (5*(fahrenheit-32)/9);
        printf ("%8.2f\t%8.2f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step ;
    }

    return 0;
}
