#include<stdio.h>
int main()
{
    int attendance;
    printf(" Enter your attendance percentage:");
    scanf("%d", &attendance);
    if(attendance>=90)
    {
        printf("excellent attendance\n");
    }
    else if(attendance>=75)
    {
        printf("good attendance\n");
    }
    else if(attendance>=65)
    {
        printf(" average attendance. prepare for condanation\n");
    }
    else{
        printf(" you may be detained . meet the hod immediately");
    }
    return 0;
}