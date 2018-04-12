#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(int *m){
    return (rand()%(*m)+1);
}

int main()
{
    int n,i;
    printf("How many random number would you like to get?\n==>");
    scanf("%d",&i);
    printf("Range?\n==>");
    scanf("%d",&n);
    //srand(time(NULL));

    for(;i>0;i--){
        printf("%d\n",random_number(&n));
    }

    return 0;
}

// absolutely nothing happens
