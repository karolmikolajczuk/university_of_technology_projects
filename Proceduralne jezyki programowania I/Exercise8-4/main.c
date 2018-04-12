#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printV(float *a, int w){
    int i=0;
    for(; i<w; i++){
        printf("%2i: %7.3f\n",i, a[i]);
    }
}

float sume(float* arr, int size){
    float sume = 0;
    for(;size>0; size--){
        sume+=arr[size];
    }
    return sume;
}

float average(float* arr, int size){
    return sume(arr, size)/size;
}

int main()
{
    int size = 100;
    float vec[size];
    srand(time(NULL));
    int i;
    for(i=0; i<size; i++){
        vec[i]= ((float)rand())/(((float)RAND_MAX/6))-2;
    }
    printf("The vector is: \n");
    printV(vec, size);
    printf("Sume: %f.3 \n", sume(vec, size));
    printf("Average: %f.3 \n", average(vec, size));

    return EXIT_SUCCESS;
}
