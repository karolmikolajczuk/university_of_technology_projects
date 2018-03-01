#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char myUniversity[80];
    char pg[] = "politechnika";
    char ug[] = "uniwesytet";
    char wsb[] = "bankowa";
    char pjp[] = "polskojaponska";

    printf("At which university do you study? ");
    scanf("%s", myUniversity);

    if(strcmp(pg, myUniversity) == 0){
        printf("Very good choice! Welcome!\n");
    }else if(strcmp(ug, myUniversity) == 0){
        printf("Oh no, wrong choice.\n");
    }else if(!strcmp(wsb, myUniversity)){
        printf("Really? That's really bad choice.\n");
    }else if(!strcmp(pjp, myUniversity)){
        printf("Worst pick.\n");
    }else{
        printf("Mmh, I dont know this place.\n");
    }

    return 0;
}
