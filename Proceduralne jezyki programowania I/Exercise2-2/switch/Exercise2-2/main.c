#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int myUniversity;
    printf("At which university do you study? ");
    scanf("%d", &myUniversity);

    switch(myUniversity){
    case 1:
        printf("Very good choice! Welcome!\n");
        break;
    case 2:
        printf("Oh no, wrong choice.\n");
        break;
    case 3:
        printf("Really? That's really bad choice.\n");
        break;
    case 4:
        printf("Worst pick.\n");
        break;
    default:
        printf("Mmh, I dont know this place.\n");
    }

    return 0;
}
