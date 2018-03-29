#include <stdio.h>
#include <stdlib.h>

int wartosc_bezwzgledna(int a)
{
    return -a;
}

int main()
{
    int w;
    scanf("%d", &w);

    if(w<1){
        w=wartosc_bezwzgledna(w);
    }
    printf("%d",w);

    return 0;
}
