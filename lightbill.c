#include <stdio.h>

int main()
{
    int units;
    int amount, charge, total_amount;
    printf("enter the units: ");
    scanf("%d", &units);

    if (units <= 200)
    {
        amount = 0;
        //charge = 0;
    }
    else if (units >= 201 && units <= 300)
    {
        amount = (units - 200) * 4; // charge=4
    }
    else if (units >= 301 && units <= 400)
    {
        amount = ((units - (200+100)) * 6) + 400; //charge=6
    }
    else
    {
        amount = (units - (200 + 100 + 100)) * 10 + 400 + 600;  //charge=10
    }

    total_amount = amount ;
    printf("electricitybill: %d", total_amount);

    return 0;
}