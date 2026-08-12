
#include <stdio.h>

struct student
{
    int id;
    float cgpa;
    char name[30];
};

int main()
{
    struct student s1 = {61, 3.89, "X"};
    struct student *ptr = &s1;

    printf("Students Information::\n");

    printf("ID = %d\n", (*ptr).id);
    printf("CGPA = %.2f\n", (*ptr).cgpa);
    printf("NAME = %s\n", (*ptr).name);

    return 0;
}
