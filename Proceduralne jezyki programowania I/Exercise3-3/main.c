#include <stdio.h>
int main ()
{
    float fahrenheit , celsius , lower , upper , step ;

    printf("Input lower: ");
    scanf("%f",&lower);

    printf("Input upper: ");
    scanf("%f",&upper);

    if( upper < lower){
        printf("The lower temperature can't be bigger than the upper one.\n");
        return 1;
    }

    printf("Input step: ");
    scanf("%f",&step);

    if(step < 0){
        printf("ERROR: the step size is negative.\n");
        return 1;
    }

    for(fahrenheit = lower ; fahrenheit<=upper ; fahrenheit+=step){
        celsius = (5*(fahrenheit-32)/9);
        printf ("%8.2f\t%8.2f\n", fahrenheit, celsius);
    }

    return 0;
}

