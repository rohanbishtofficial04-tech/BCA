#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool increasingTriplet(int *nums, int numsSize)
{
    if (numsSize < 3)
    {
        return false;
    }

    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] <= first)
        {
            first = nums[i]; // Update first if current element is smaller or equal
        }
        else if (nums[i] <= second)
        {
            second = nums[i]; // Update second if current element is bigger than first but smaller or equal to second
        }
        else
        {
            return true; // Found a triplet since current element is bigger than both first and second
        }
    }

    return false; // No such triplet found
}

int main()
{
    int nums[] = {2, 1, 5, 0, 4, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    if (increasingTriplet(nums, numsSize))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
