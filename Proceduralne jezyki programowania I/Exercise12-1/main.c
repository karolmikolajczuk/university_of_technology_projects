#include <stdio.h>
#include <stdlib.h>

struct particle {
    int mass;
    int x;
    int velocity_x;
};

void print_Structure(struct particle *p) {
    printf("Particle: \n");
    printf("mass: %d\n",p->mass);
    printf("x: %d\n", p->x);
    printf("velocity of x: %d\n", p->velocity_x);
}

void input_Structure(struct particle *p) {
    do{
    printf("Input mass of particle in [kg]: ");
    scanf("%d", &p->mass);
    }while(p->mass<=0 || p->mass>1000);
    do{
    printf("Input x of particle in [m]: ");
    scanf("%d", &p->x);
    }while(p->x<-100 || p->x>100);
    do{
    printf("Input velocity of particle: ");
    scanf("%d", &p->velocity_x);
    }while(p->velocity_x<-100 || p->velocity_x>100);
}

void generate_Random_Data_Structure(struct particle *p) {
    p->mass = ((int)rand())/((int)RAND_MAX/2000)-1000;
    p->x = ((int)rand())/((int)RAND_MAX/200)-100;
    p->velocity_x = ((int)rand())/((int)RAND_MAX/200)-100;
}

int momentum(struct particle p) {
    return p.mass * p.velocity_x;
}

int kinetic_Energy(struct particle p) {
    return (p.mass * p.velocity_x * p.velocity_x)/2;
}

int main()
{
    struct particle myParticle;
    struct particle randomParticle;

    input_Structure(&myParticle);
    generate_Random_Data_Structure(&randomParticle);
    print_Structure(&myParticle);
    print_Structure(&randomParticle);
    printf("momentum of particle: %d\n", momentum(myParticle));
    printf("momentum of particle: %d\n", momentum(randomParticle));
    printf("kinetic energy of particle: %d\n", kinetic_Energy(myParticle));
    printf("kinetic energy of particle: %d\n", kinetic_Energy(randomParticle));

    return 0;
}
