#include <math.h>
#include <stdio.h>

int main(void)
{
    int coinsReturned = 0;
    float change;
    printf("O hai! How much change is owed? \n");
    scanf("%f",&change);
    while (change < 0) {
        printf("How much change is owed? \n");
        scanf("%f",&change);
    }
    int amount =  roundf(change * 100);
    while (amount > 0) 
    {
        if ((amount - 25) >= 0) { amount = amount - 25; coinsReturned++; }
        else if ((amount - 10) >= 0) { amount = amount - 10; coinsReturned++; }
        else if ((amount - 5) >= 0) { amount = amount - 5; coinsReturned++; }
        else if ((amount - 1) >= 0) { amount = amount - 1; coinsReturned++; }
    }
    printf("%d\n", coinsReturned);
}

