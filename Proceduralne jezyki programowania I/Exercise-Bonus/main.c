#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    do{
        printf("Input number between 1 and 100: ");
        scanf("%d", &a);
    }while(a<1 || a>100);

    return EXIT_SUCCESS;
}
