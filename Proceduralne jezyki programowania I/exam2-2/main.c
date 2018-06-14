#include <stdio.h>
#include <stdlib.h>


float min_number(float* numb, int a)
{
    int i = 0;
    float min = numb[0];
    for( ; i<a; i++)
    {
        if(min> numb[i])
            min = numb[i];
    }
    return min;
}

int main()
{
    int a;
    float *vec1;

    do{
        printf("Input size of dimension:");
        scanf("%d",&a);
    }while(a<0);

    vec1 = (float*)malloc(a*sizeof(float));
    int i=0;

    for(;i<a;i++)
    {
        printf("Input a %d number of vector: ", i+1);
        scanf("%f", &vec1[i]);
    }

    printf("Smallest: %.4f", min_number(vec1, a));


    free(vec1);
    return 0;
}
