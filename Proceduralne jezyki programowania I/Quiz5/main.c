#include <stdio.h>
#include <stdlib.h>

int fibo(int a)
{
    if(a==0)
        return 0;
    if(a==1)
        return 1;

    return (fibo(a-1)+fibo(a-2));
}

int main()
{
    int q, *t;
    printf("Input number:");
    scanf("%d",&q);

    t = malloc(q*sizeof(int));
    int i = 0;
    for(;i<q;i++)
    {
        t[i] = fibo(i);
    }

    for(i=0;i<q;i++)
    {
        printf("%d\n",t[i]);
    }

    free(t);
    return 0;
}
