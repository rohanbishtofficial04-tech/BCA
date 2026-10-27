#include <stdio.h>
#include <stdbool.h>
int max(int *arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void KidsWithCandies(int *candies, int candiesSize, int extraCandies, bool *result)
{
    int MaxCandies = max(candies, candiesSize);
    for (int i = 0; i < candiesSize; i++)
    {
        if (candies[i] + extraCandies >= MaxCandies)
            result[i] = true;
        else
            result[i] = false;
    }
}
int main()
{
    int candies[] = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    int candiesSize = 5;
    bool result[5];

    KidsWithCandies(candies, candiesSize, extraCandies, result);
    printf("Result: { ");
    for (int i = 0; i < candiesSize; i++)
    {
        printf(result[i] ? "True" : "False"); // if the condition is true, left side statement will be printed,
                                              // if the condition is false, right side statement will be printed
        if (i < candiesSize - 1)
        {
            printf(", ");
        }
    }
    printf(" }\n");
    return 0;
}