#include <stdio.h>

struct student
{
    int roll;
    float marks;
    char department[30];
};

int main()
{
    struct student s1;

    printf("Enter roll number:: ");
    scanf("%d", &s1.roll);

    printf("Enter marks:: ");
    scanf("%f", &s1.marks);

    printf("Enter department:: ");
    scanf("%s", s1.department);

    printf("Student information::\n");
    printf("ROLL= %d\n", s1.roll);
    printf("MARKS= %.2f\n", s1.marks);
    printf("DEPARTMENT= %s\n", s1.department);

    return 0;
}
