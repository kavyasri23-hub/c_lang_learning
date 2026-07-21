#include<stdio.h>
int main()
{
    int marks ;
    printf("enter your marks:");
    scanf("%d",&marks);
    if (marks<0 || marks>100)
    {
        printf(" invalid marks. enter correct marks.\n");
    }
    else if (marks >=90)
    {
        printf("grade =A\n");
    }
    else if(marks>=80)
    {
        printf(" grade=B\n");
    }
    else if(marks>=70)
    {
        printf(" garde=C\n");
    }
    else if(marks>=60)
    {
        printf(" grade=D\n");
    }
    else 
    {
        printf(" grade=F\n");
    }
    return 0;
    }

