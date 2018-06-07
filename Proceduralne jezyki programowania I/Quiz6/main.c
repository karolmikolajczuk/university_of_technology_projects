/*
    Karol Miko³ajczuk 174019
    Kamil Mu¿a 174097
    Miko³aj Lisicki 174033
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int a;
    float *vec1, *vec2;

    do{
        printf("Input size of dimension:");
        scanf("%d",&a);
    }while(a<0);

    vec1 = (float*)malloc(a*sizeof(float));
    vec2 = (float*)malloc(a*sizeof(float));

    int i = 0;
    srand(time(NULL));

    for(;i<a;i++)
    {
        vec1[i] = (int)rand()%6;
        vec1[i]/=10;
        printf("Vector 1: %.1f\n",vec1[i]);
        vec2[i] = ((int)rand()%6);
        vec2[i] /=10;
        printf("Vector 2: %.1f\n",vec2[i]);
    }

    float sume1=0, sume2=0;

    for(i=0; i<a; i++)
    {
        sume1 += vec1[i];
        sume2 += vec2[i];
    }

    for(i=0; i<a; i++)
    {
        vec1[i] += vec2[i];
        printf("Vector sume in rows: %.1f\n", vec1[i]);
    }

    printf("Sume1: %f\n", sume1);
    printf("Sume2: %f\n", sume2);
    printf("Whole sume: %f\n", sume1+sume2);

    free(vec1);
    free(vec2);

    return 0;
}
