#include<stdio.h>
void hello(int n){
if (n==0){
    return 0;
}
printf(" entering hello (%d)\n",n);
printf("hello\n");
hello(n-1);
printf("leaving hello(%d)\n",n);
}
int main(){
hello(3);
return 0;
}