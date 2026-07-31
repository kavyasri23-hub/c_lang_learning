#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks ;
};
int main()
{
    struct student s1={1, "Kavyasri",90};
    struct student s2={2, " Tejasri",91};
     printf("\n--------student-1 Details---------\n");
     printf("\tRoll Number :%d\n",s1.roll);
     printf("\tName        :%s\n",s1.name);
     printf("\tMarks        %.2f\n",s1.marks);

     printf("\nRoll Number : %d\n",s2.roll);
     printf("\tName        :%s\n",s2.name);
     printf("\tMarks        :%.2f\n",s2.marks);
     return 0 ;
}

