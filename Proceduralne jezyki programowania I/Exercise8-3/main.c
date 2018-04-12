#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print(int *a){
    printf("%d\n", (*a));
}

int check_if_exists(int* arr, int* a){
    if(arr[(*a)]>0){
        return 1;
    }
    return 0;
}

int generator(){
    int n = 6, random, arr[50];
    int i = 0;
    for(;i<50; i++){
        arr[i]=0;
    }
    srand(time(NULL));
    for(;n>0;n--){
        do{
            random = rand()%49+1;
        }while(check_if_exists(arr, &random));

        arr[random]++;
        print(&random);
    }
}

int main()
{
    printf("LOTTO!\n");
    generator();
    return 0;
}
