#include<stdio.h>
struct myStructure{
    int myage;
    char myletter;
};
int main()
{
    struct myStructure s1;

    s1.myage=21;
    s1.myletter='L';

    printf("My age: %d\n", s1.myage);
    printf("My letter: %c\n", s1.myletter);

    return 0;
}
