#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Input number: ");
    scanf("%d", &number);

    if(number<0){
        printf("Your number is negative\n");
        return -1;
    }else if(!number){
        printf("Your number is zero.\n");
    }else if(!(number%2)){
        printf("Your number is even.\n");
    }else{
        printf("Your number is odd.\n");
    }

    return 0;
}
