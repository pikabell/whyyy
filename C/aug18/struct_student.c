#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[50];
    char branch[50];
    int roll;
    int year;
};
int main()
{
    struct student s;
    printf("Enter The Information of Student :\n\n");
    printf("Enter Name : ");
    gets(s.name);
    printf("Enter Roll no. : ");
    scanf("%d", &s.roll);
    printf("Enter year : ");
    scanf("%d", &s.year);
    getchar();
    printf("Enter Branch : ");
    gets(s.branch);
    printf("\nDisplaying Information\n");
    printf("Name: %s\n", s.name);
    printf("Roll no: %d\n", s.roll);
    printf("Year: %d\n", s.year);
    printf("Branch: %s\n", s.branch);
    return 0;
}
