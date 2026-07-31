#include<stdio.h>
int main()
{
    int choice;
    printf("============== Restaurant Menu============\n");
    printf("1. Dum biryani (Non-Veg)\n");
    printf("2. Fry biryani (Non-Veg)\n");
    printf(" 3. Vegetable biryani(Veg)\n");
    printf("4. Paneer biryani (Veg)\n");

    printf("\n enter youe choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf(" you ordered Dum biryani (Non-Veg).\n");
        break;
        case 2:
        printf(" you ordered Fry biryani(Non-Veg).\n");
        break;
        case 3:
        printf(" you ordered Vegtable biryani(Veg).\n");
        break;
        case 4:
        printf(" you ordered Paneer biryani (Veg).\n");
        break;
        default :
        printf(" invalid choice\n");
    }
    return 0;
}