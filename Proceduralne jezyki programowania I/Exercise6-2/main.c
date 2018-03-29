#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

float pole_kola(int r)
{
    return PI*r*r;
}

int main()
{
    int a;
    scanf("%d",&a);
    if(a<0){
        printf("Error, a must be bigger than 0\n");
        return -1;
    }
    printf("Pole=%.3f\n",pole_kola(a));
    return 0;
}
