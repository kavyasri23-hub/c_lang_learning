#include<stdio.h>
int main()
{
    FILE *fp;
    fp= fopen("student.txt","w");
    if(fp==NULL)
    {
        printf(" unable to create file.\n");
        return 1;
    }
        fprintf(fp,
        "Today is the last day of c programming!\n"
        "I learned and understood c during these 12 days.\n"
        "Now I should practice more problem in c"
         " to become expert.\n"
        );
        fclose(fp);
        printf(" Data written sucessfully.\n");
        return 0;

    }
