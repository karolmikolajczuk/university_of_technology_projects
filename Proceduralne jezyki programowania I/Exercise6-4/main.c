#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lower_to_upper(char * text)
{
    int i=0;
    for(;i<strlen(text);i++)
    {
        if(text[i]>96){
            text[i]-=32;
        }
    }
}

int main()
{
    printf("Text: ");
    char arr[100];
    scanf("%s",&arr);

    lower_to_upper(arr);

    printf("%s\n",arr);

    return 0;
}
