#include <stdio.h>
#include <stdlib.h>

void suma2(int g, int x, int y, int* z){
    *z = x + y + g;
}

int mnozenie(int a, int b, int c){
    return a*b*c;
}

float srednia(int a, int b, int c){
    return (a+b+c)/2;
}

int max(int a, int b, int c){
    int max=a;

    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    return max;
}

int min(int a, int b, int c){
    int min=a;

    if(b<min){
        min=b;
    }
    if(c<min){
        min=c;
    }
    return min;
}

void czytaj_input(int *a, int *b, int *c){
    scanf("%i",a);
    scanf("%i",b);
    scanf("%i",c);
}

void mnozenie_przez_cztery(int *a, int *b, int *c){
    *a*=4;
    *b*=4;
    *c*=4;
}

float dzielenie(float a, float b){
    return a/b;
}

int main()
{
    int a,b,c,d=0;

    czytaj_input(&a,&b,&c);
    printf("After input: a=%d b=%d c=%d\n",a,b,c);

    mnozenie_przez_cztery(&a,&b,&c);
    printf("After *4: a=%d b=%d c=%d\n",a,b,c);

    suma2(a,b,c,&d);
    printf("The sum of %d and %d and %d is: %d\n",a,b,c,d);

    float dziel = dzielenie(a,b);
    printf("After dzielenie: a=%d b=%d wynik=%f\n",a,b,dziel);

    return 0;
}
