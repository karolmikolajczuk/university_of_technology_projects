#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);

    if(a<0){
        for(;a<=0;a++){
            printf("%d\n",a);
        }
    }else{
        for(;a>=0;a--){
            printf("%d\n",a);
        }
    }

    return 0;
}
