#include <stdio.h>
#include <stdlib.h>

typedef struct animal animals;

struct animal {
    const char* name;
    int age;
};

void inputs(struct animal *myanimals, int a)
{
    int i = 0;
    for (;i<a; i++){
        printf("Input Name: ");
        scanf("%s", &myanimals[i].name);

        do{
            printf("Input Age: ");
            scanf("%d", &myanimals[i].age);
        }while(myanimals[i].age<0);
    }
}

int max_building(animals* myanimals, int a)
{
    int i = 0, maximum = myanimals[0].age;
    for( ; i<a; i++)
    {
        if(maximum < myanimals[i].age)
            maximum = myanimals[i].age;
    }
    return maximum;
}

int main()
{
    int a;
    do{
        printf("How many animals?");
        scanf("%d", &a);
    }while(a<1);

    animals* myAnimals;
    myAnimals = malloc(a*sizeof(animals));

    inputs(myAnimals, a);
    printf("Oldest: %d", max_building(myAnimals, a));

    free(myAnimals);
    return 0;
}
