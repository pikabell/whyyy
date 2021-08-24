
#include <stdio.h>
#include <string.h>
union student{
    char name[30];
    char branch[30];
    int roll;
    float fee;

};

int main(){
    union student s;
    printf("Enter name :");
    gets(s.name);
    printf("Name : %s\n", s.name);
    printf("Enter branch :");
    gets(s.branch);
    printf("Branch : %s\n", s.branch);
    s.roll = 200813;
    printf("Roll no : %d\n", s.roll);
    s.fee = 37000.00;
    printf("Fee : %.2f\n", s.fee);


    return 0;
}



/* #include <stdio.h> */
/* #include <string.h> */

/* union student */ 
/* { */
/*             char name[20]; */
/*             char subject[20]; */
/*             float percentage; */
/* }; */

/* int main() */ 
/* { */
/*     union student record1; */
/*     union student record2; */

/*     // assigning values to record1 union variable */
/*        strcpy(record1.name, "Raju"); */
/*        strcpy(record1.subject, "Maths"); */
/*        record1.percentage = 86.50; */

/*        printf("Union record1 values example\n"); */
/*        printf(" Name       : %s \n", record1.name); */
/*        printf(" Subject    : %s \n", record1.subject); */
/*        printf(" Percentage : %f \n\n", record1.percentage); */

/*     // assigning values to record2 union variable */
/*        printf("Union record2 values example\n"); */
/*        strcpy(record2.name, "Mani"); */
/*        printf(" Name       : %s \n", record2.name); */

/*        strcpy(record2.subject, "Physics"); */
/*        printf(" Subject    : %s \n", record2.subject); */

/*        record2.percentage = 99.50; */
/*        printf(" Percentage : %f \n", record2.percentage); */
/*        return 0; */
/* } */
