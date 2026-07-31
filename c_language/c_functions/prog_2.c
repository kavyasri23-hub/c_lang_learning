#include<stdio.h>
void add(int a,int b);
int main()
{
    int num1,num2;
    printf(" Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    add (num1,num2);
    return 0;

}
void add (int a,int b){
    printf("sum =%d\n",a+b);

}