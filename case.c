#include <stdio.h>

int main()
{
        int Days;
        int i=0;
    do
    {

        printf("\nEnter Days: ");
        scanf("%d", &Days);
        switch (Days)
        {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;

        default:
            printf("Please enter the Days between 1 to 7");
            break;
        }
    } 
    while(i<=0);

    return 0;
}