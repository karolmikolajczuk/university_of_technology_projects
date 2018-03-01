#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("At which university do you study?\n");
    printf("write: \n1 - PG\n2 - UG\n3 - AWFiS\n");
    scanf("%i", &x);

    switch(x){
    case 1:
        printf("You are at PG. Very good choice! Welcome!\n");
        break;
    case 2:
        printf("You are at UG. That is also not so bad.\n");
        break;
    case 3:
        printf("You are at AWFiS. That is OK, too.\n");
        break;
    default:
        printf("That is very sad - I do not know this place.\n");
    }
    //if brackets will be deleted each next case will be done
    return 0;
}
