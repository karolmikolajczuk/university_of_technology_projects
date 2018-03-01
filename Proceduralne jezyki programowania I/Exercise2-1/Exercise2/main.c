#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char myUniversity[80];
    char pg[] = "politechnika";

    printf("At which university do you study?");
    scanf("%s", &myUniversity);

    if( strcmp(pg, myUniversity) == 0){
        printf("Very good choice! Welcome!\n");
    }else {
        printf("I do not know this place.\n");
    }

    char course[30];
    printf("What dou you study?\n");
    scanf("%s",  &course);
    if(!strcmp(course, "Physics")){
        printf("Oh %s is great course!", course);
    }else{
        printf("Good luck!");
    }

    return 0;
}
