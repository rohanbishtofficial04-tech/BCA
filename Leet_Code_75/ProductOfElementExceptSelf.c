#include <stdio.h>
int *productExceptSelf(int *nums, int numSize, int *output)
{
    int left[numSize];
    int right[numSize];
    left[0] = 1;
    right[numSize - 1] = 1;
    for (int i = 1; i < numSize; i++)
    {
        left[i] = left[i - 1] * nums[i - 1];
    }
    for (int i = numSize - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] * nums[i + 1];
    }
    for (int i = 0; i < numSize; i++)
    {
        output[i] = left[i] * right[i];
    }
    /*printf("Left Array:   ");
    for (int i = 0; i < numSize; i++)
    {
        printf("%d   ", left[i]);
    }
    printf("\nRight Array:  ");
    for (int i = 0; i < numSize; i++)
    {
        printf("%d  ", right[i]);
    }
    printf("\n");*/
}
int main()
{
    int nums[] = {1, 2, 3, 4};
    int numSize = sizeof(nums) / sizeof(nums[0]);
    int output[numSize];
    productExceptSelf(nums, numSize, output);
    printf("Output Array: ");
    for (int i = 0; i < numSize; i++)
    {
        printf("%d  ", output[i]);
    }
    return 0;
}