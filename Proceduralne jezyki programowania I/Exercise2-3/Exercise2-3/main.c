#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char myUniversity[80];
    char ug[] = "uniwersytet";
    char pg[] = "politechnika";

    printf("At which university do you study? ");
    scanf("%s" ,myUniversity);

    if( strcmp(pg, myUniversity)==0 || strcmp("PG",myUniversity)==0){
        printf("Very good choice! Welcome!\n");
        char myStudy[80];
        char ph[] = "Physics";
        printf("What do you study? ");
        scanf("%s" ,myStudy);
        if(!strcmp(ph, myStudy)){
            printf("That is very interesting.");
        }else{
            printf("You should switch to Physics!");
        }
    }else if(!strcmp(ug, myUniversity)){
        printf("Oh no, wrong choice.\n");
    }else{
        printf("Mmh, I do not know this place.\n");
    }
    return 0;
}
