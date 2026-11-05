#include<stdio.h>
struct Owner{
    char firstName[30];
    char lastName[30];
};

struct Car{
    char brandName[30];
    int year;
    struct Owner owner;
};

int main()
{
    struct Owner owner={"Leikon" , "Sinha"};
    struct Car car1={"Toyota", 2026, owner};

    printf("Car : %s (%d)\n", car1.brandName, car1.year);
    printf("Owner : %s %s", car1.owner.firstName, car1.owner.lastName);
    
    return 0;
    
}