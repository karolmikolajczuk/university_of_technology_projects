#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_number, second_number;

    printf("Input your first number: ");
    scanf("%d", &first_number);

    printf("Input your second number: ");
    scanf("%d", &second_number);

    if(first_number+second_number > 10){
        printf("The sum of your number is larger than 10.");
    }else{
        printf("The sum of your number is not larger than 10.");
    }
    return 0;
}
