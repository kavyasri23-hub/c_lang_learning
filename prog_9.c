#include<stdio.h>
#include<string.h>
int main()
{
    char name_1[20];
    char name_2[20];
    printf(" hello good morning\n");
    printf(" enter your name:");
    fgets(name_1, sizeof(name_1),stdin);
    printf(" enter your friend's name:");
    scanf("%s",& name_2);
    printf("Hey %s.\n your friend's name is %s.", name_1,name_2);
    printf(" both %s and %s are best friends", name_1,name_2);
    return 0;
}
