#include <stdio.h>
#include <stdlib.h>

long int factorial(int n)
{
    int i=1,fac=1;
    for(;i<=n;i++)
    {
        fac*=i;
    }
    if(!n){
        return 1;
    }
    return fac;
}

int main()
{
    int liczba;
    do{
        scanf("%d",&liczba);
    }while(liczba<0);

    printf("Factorial:%d\n",factorial(liczba));
    return 0;
}
