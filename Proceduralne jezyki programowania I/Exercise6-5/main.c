#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change(char* text)
{
    int i=0,n=strlen(text);
    for(;i<n;i++)
    {
        switch(text[i])
        {
        case 'a':
        case 'b':
        case 'c':
        case 'A':
        case 'B':
        case 'C':
            text[i]='X';
            break;
        case 'd':
        case 'e':
        case 'f':
        case 'D':
        case 'E':
        case 'F':
            text[i]='Y';
            break;
        }

    }

    printf("%s",text);
}

int main()
{
    char arr[100];
    scanf("%s",arr);

    change(arr);

    return 0;
}
