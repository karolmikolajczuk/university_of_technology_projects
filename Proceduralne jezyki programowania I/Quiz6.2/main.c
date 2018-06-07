/*
    Karol Miko³ajczuk 174019
    Miko³aj Lisicki 174033
    Kamil Mu¿a 174097
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct buildings builds;

struct buildings {
    int nr_flats;
    int value;
};

int total_flats(builds* myflats, int a)
{
    int i = 0, sume = 0;
    for( ; i<a; i++)
    {
        sume += myflats[i].nr_flats;
    }
    return sume;
}

int min_building(builds* myflats, int a)
{
    int i = 0, min = myflats[0].value;
    for( ; i<a; i++)
    {
        if(min> myflats[i].value)
            min = myflats[i].value;
    }
    return min;
}


void inputs(struct buildings *myflats, int a)
{
    int i = 0;
    for (;i<a; i++){

        printf("Input Flats: ");
        scanf("%d", &myflats[i].nr_flats);

        printf("Input Value: ");
        scanf("%d", &myflats[i].value);
    }
}

int main()
{
    int a;
    do{
        printf("How many buildings?");
        scanf("%d", &a);
    }while(a<1);

    builds* mybuild;
    mybuild = malloc(a*sizeof(builds));

    inputs(mybuild, a);
    printf("Total flats: %d\n",total_flats(mybuild,a));
    printf("Cheapest: %d\n", min_building(mybuild, a));

    return 0;
}
