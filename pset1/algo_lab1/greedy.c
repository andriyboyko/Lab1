#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int coins = 0;
do
{
    printf("How much change is owed? : ");
    change = GetFloat();
}
    while(change < 0);

    int amount = round(change * 100);
    if(amount >= 25)
    do
    {
        amount = amount - 25;
        coins = coins + 1;
    }
    while(amount >= 25);
    if(amount >= 10)
    do 
    {
        amount = amount - 10;
        coins = coins + 1;
    }
    while(amount >= 10);
    if(amount >= 5)
    do
    {
        amount = amount - 5;
        coins = coins + 1;
    }
    while(amount >= 5);
    if(amount >= 1)
    do
    {
        amount = amount - 1;
        coins = coins + 1;
    }
    while(amount >= 1);
    
        {
            printf("There are %d coins \n", coins);
        }
    
}    
