#include <stdio.h>
#include <stdlib.h>

float cube(float *v)
{
    return (*v)*(*v)*(*v);
}

float surface(float *a)
{
    return 6*(*a)*(*a);
}

int main()
{
    float input;

    printf("Input a:");
    scanf("%f", &input);

    if(input <= 0){
        printf("Error, input has to be higher than 0!\n");
        return -1;
    }

    printf("Cube: %.4f\n", cube(&input));
    printf("Surface: %.4f\n", surface(&input));

    return 0;
}
