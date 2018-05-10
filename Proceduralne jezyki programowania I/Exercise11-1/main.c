#include <stdio.h>
#include <stdlib.h>

typedef struct person person_str;

struct person
{
    char given_name[20];
    char surname[20];
    unsigned long long pesel;
    int age;
};

void printPerson1(struct person* ptr)
{
    printf("Name: %s %s.\n",ptr->given_name, ptr->surname);
    printf("PESEL: %llu\n",ptr->pesel);
    printf("Age: %d\n",ptr->age);
}

void printPerson2(struct person joe)
{
    printf("Name: %s %s.\n",joe.given_name, joe.surname);
    printf("PESEL: %llu\n",joe.pesel);
    printf("Age: %d\n",joe.age);
}

void inputPerson(struct person* ptr)
{
    printf("Input name: ");
    scanf("%s",&ptr->given_name);

    printf("Input surname: ");
    scanf("%s",&ptr->surname);

    printf("Input pesel: ");
    scanf("%llu", &ptr->pesel);

    printf("Input age: ");
    scanf("%d",&ptr->age);
};

void askForSurname()
{
    printf("Input surname to compare: ");

}

int main()
{
    struct person einstein = {
        "Albert",
        "Einstein",
        79031412345,
        63
    };

    printf("Name: %s %s.\n",einstein.given_name, einstein.surname);
    printf("PESEL: %llu\n",einstein.pesel);
    printf("Age: %d\n", einstein.age);

    printf("Let's change some data:\n");
    printf("%s is getting a new PESEL number\n", einstein.surname);
    printf("Please enter a new PESEL number: ");
    scanf("%llu", &einstein.pesel);
    printf("Please enter a new Age number: ");
    scanf("%d", &einstein.age);

    printPerson1(&einstein);
    printPerson2(einstein);

    printf("Let's do the same again.\n");
    printf("This time we use some pointers for the struct:\n");

    struct person *ptr1;
    ptr1 = &einstein;

    printf("Name: %s %s\n",ptr1->given_name, ptr1->surname);
    printf("PESEL number: %llu\n", ptr1->pesel);
    printf("Age: %d\n", ptr1->age);

    printf("Let's change some data:\n");
    printf("%s is getting a new PESEL number\n", ptr1->surname);
    printf("Please enter a new PESEL number: ");
    scanf("%llu", &ptr1->pesel);

    printPerson1(&einstein);
    printPerson2(einstein);

    printf("_________________________\n");
    struct person * karol;
    inputPerson(&karol);
    printf("Print:\n");
    printPerson1(&karol);

    printf("______________________________\n");
    printf("How many people?");
    int w;
    scanf("%d",&w);
    person_str* tablica;
    tablica = malloc(w*sizeof(struct person));

    person_str table[w];
    int p = 0;
    for(; p<w; p++)
    {

    }

    for(p=0;p<w; p++)
    {
        printPerson1(tablica[p]);
    }

    return EXIT_SUCCESS;
}
