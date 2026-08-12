
#include <stdio.h>

struct student
{
    int roll;
    float marks;
};

int main()
{
    struct student s;

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Roll = %d\n", s.roll);
    printf("Marks = %.2f\n", s.marks);

    return 0;
}
