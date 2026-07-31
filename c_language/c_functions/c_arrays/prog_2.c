#include<stdio.h>
int main()
{
    int marks[5]={91,97,87,98,89};
    int memory_of_array, length_of_array;
memory_of_array = sizeof(marks);
printf("\n size of the marks array:%d\n\n", memory_of_array);
length_of_array = sizeof(marks)/sizeof(marks[0]);
printf(" length the marks array :%d\n\n",length_of_array);
printf(" the value of  marks of student 1 is %d\n",marks[0]);
printf(" the value of marks of student 2 is %d\n", marks[1]);
printf(" the value of marks of student 3 is %d\n", marks[2]);
printf(" the value of marks of student 4 is %d\n",marks[3]);
printf(" the  value of marks of student 5 is%d\n" , marks[4]);
return 0;
}