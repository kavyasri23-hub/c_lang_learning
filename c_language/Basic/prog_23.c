#include<stdio.h>
int main()
    {
        int show ;
        printf("============= movie shows============\n");
        printf("1. morning show\n");
        printf("2. afternoon show\n");
        printf("3. evening show\n");
        printf(" 4. night show\n");
        
        printf("\n choo
            
            
            
            
            se show :");
        scanf("%d", &show);

        switch (show)
        {
            case 1:
            printf(" morning  show booked .\n");
            break;
            case 2:
            printf(" afternoon show booked.\n");
            break;
            case 3:
            printf(" evening show booked.\n");
            break;
            case 4:
            printf(" night show booked.\n");
            break;
            default:
            printf(" invalid show\n");
        }
        return 0;
    }
