#include<stdio.h>
int main()
{
    int num = 25;
    int *ptr;
    ptr = &num;
printf("Value of num =%d\n",num);
printf("Address of num =%p\n",&num);
printf(" pointer stores =%p\n",&ptr);
printf("Value using pointer :%d",*ptr);
return 0;
}