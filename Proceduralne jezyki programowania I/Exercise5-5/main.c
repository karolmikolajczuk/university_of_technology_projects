#include <stdio.h>
#include <stdlib.h>

int suma(int arr[], int sizeofarr){
    int suma = 0, i=0;
    for(;i<sizeofarr;i++){
        suma+=arr[i];
    }
    return suma;
}

void readarr(int arr[], int sizeofarr){
    int i = 0;
    for(;i<sizeofarr;i++){
        scanf("%d",&arr[i]);
    }
}

float average(int arr[], int sizeofarr){
    int i=0;
    float sum=0;
    for(;i<sizeofarr;i++){
        sum+=arr[i];
    }
    return sum/sizeofarr;
}


int min(int arr[], int sizeofarr){
    int minimum=arr[0];
    int i = 0;
    for(;i<sizeofarr;i++){
        if(minimum>arr[i]){
            minimum=arr[i];
        }
    }
    return minimum;
}
int max(int arr[], int sizeofarr){
    int maximum=arr[0];
    int i = 0;
    for(;i<sizeofarr;i++){
        if(maximum<arr[i]){
            maximum=arr[i];
        }
    }
    return maximum;
}
int main()
{
    int a[10];
    readarr(a,10);
    printf("The sum of array is: %d\n",suma(a,10));
    printf("The average of array is: %f\n",average(a,10));
    printf("The maximum is: %d\n",max(a,10));
    printf("The minimum is: %d\n",min(a,10));
    return 0;
}
