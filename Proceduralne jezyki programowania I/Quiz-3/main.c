#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j;
    for(;i<=9;i++){
        for(j=0;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }



    return 0;
}
