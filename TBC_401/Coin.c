#include <stdio.h>
int main()
{
    int amount = 73;
    int coins[] = {25, 20, 10, 5};
    int numCoins = 0;
    printf("Amount: %d cents\n", amount);
    for (int i = 0; i < 4; i++)
    {
        while (amount >= coins[i])
        {
            amount = amount - coins[i];
            numCoins++;
            printf("Used coin: %d cents\n", coins[i]);
        }
    }
    printf("Remaining Amount: %d\n", amount);
    printf("Total number of coins: %d\n", numCoins);
    return 0;
}
