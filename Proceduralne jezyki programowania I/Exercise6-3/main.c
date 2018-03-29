#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

float pole_walca(int r, int h)
{
    return PI*r*r*h;
}

int wartosc_bezwzgledna(int a)
{
    return -a;
}


int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    if(a<0){
        printf("=====> A: Error, a and b must be bigger than 0\n");
        a = wartosc_bezwzgledna(a);
    }
    if(b<0){
        printf("=====> B: Error, a and b must be bigger than 0\n");
        b = wartosc_bezwzgledna(b);
    }

    printf("Pole=%.3f\n",pole_walca(a,b));
    return 0;
}
