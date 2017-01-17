#include <stdio.h>

int main(void)
{
    int minutes;
    printf("Minutes: ");
    scanf("%d",&minutes); 
    if (minutes > 0)
    {
        int bottles = ( 128 * (1.5 * minutes) ) / 16;
        printf("Bottles: %d\n", bottles);
    }
    else
    {
        printf("Number must be an integer\n");
    }
}
