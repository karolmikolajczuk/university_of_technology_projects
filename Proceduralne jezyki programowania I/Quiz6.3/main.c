/*
    Karol Miko³ajczuk 174019
    Kamil Mu¿a 174097
    Miko³aj Lisicki 174033
*/

#include <stdio.h>
#include <stdlib.h>

struct particle{
    int charge_in_Coulombs;
    int x;
};

void printParticle(struct particle *p)
{
    printf("Charge: %d\n", p->charge_in_Coulombs);
    printf("X: %d\n", p->x);
}

int main()
{
    int a;
    struct particle p1;
    struct particle p2;

    printf("Input data for particle nr 1: \n");
    printf("Charge: ");
    scanf("%d", &p1.charge_in_Coulombs);
    printf("X: ");
    scanf("%d", &p1.x);

    printf("Input data for particle nr 2: \n");
    printf("Charge: ");
    scanf("%d", &p2.charge_in_Coulombs);
    printf("X: ");
    scanf("%d", &p2.x);

    int distance = p1.x - p2.x;
    if(distance<0)
        distance *= (-1);
    printf("Distance: %d\n", distance);

    float k = 8.98755;
    float U = (k*p1.charge_in_Coulombs*p2.charge_in_Coulombs)/distance;
    printf("U: %f\n", U);

    return 0;
}
