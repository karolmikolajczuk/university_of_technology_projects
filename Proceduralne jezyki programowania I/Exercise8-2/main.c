#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int length_vector(int *n, int a){
    int sume=0;
    for(;a>0;a--){
        sume=(n[a-1]*n[a-1]);
    }
    return sqrt(sume);
}

int sum_vector(int *n, int a){
    int sum=0;
    for(;a>0;a--){
        sum+=n[a-1];
    }
    return sum;
}

void print_vector(int *n, int a){
    int i;
    for(i=0; i<a; i++){
        printf("%2i: %3i\n",i,n[i]);
    }
}

int* how_often(int *n, int a){
    int arr[a+1],i;
    for(;a>0;a--){
        arr[n[a-1]]++;
    }

    for(i=0;i<a;i++){
        printf("%d: %d\n",i,arr[i]);
    }

    return arr;
}

int most_often(int *n, int a){
    int vec[a+1],most_oft=0,most_index=0;
    for(;a>0;a--){
        vec[n[a-1]]++;
    }

    for(;a>0;a--){
        if(vec[a-1]>most_oft){
            most_index=a-1;
        }
    }
    return most_index;
}

int main()
{
    int vec[100],i=0;
    srand(time(NULL));
    for(;i<100;i++){
        vec[i]=rand()%10 + 1;
    }
    printf("The vector is:\n");
    print_vector(vec, 100);
    printf("The sume is: %d\n",sum_vector(vec,100));
    printf("The length of vec: %d\n", length_vector(vec, 100));
    return 0;
}
