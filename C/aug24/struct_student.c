
#include <stdio.h>

struct student{
    char name[30];
    char branch[30];
    int roll;
    float fee;

};

int main(){
    struct student s;
    printf("\nEnter the details\n\n");
    printf("Enter name : ");
    gets(s.name);
    printf("Enter Branch : ");
    gets(s.branch);
    printf("Enter roll no : ");
    scanf("%d",&s.roll);
    printf("Enter fee : ");
    scanf("%f",&s.fee);
    printf("\nDisplaying Details\n");
    printf("Name : %s\n Branch : %s\n Roll no : %d\n Fee : %.2f \n",s.name,s.branch,s.roll,s.fee);


    return 0;
}
