#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Input number: ");
    scanf("%d",&a);

    if(a<0){
        printf("ERROR: number < 0.");
        return 1;
    }

    for(;a>=0; a--){
        printf("%d\n",a);
    }
    return 0;
}
