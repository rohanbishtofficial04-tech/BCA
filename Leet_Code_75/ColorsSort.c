#include <stdio.h>
int *sortColors(int *colors, int size)
{
    int srt = 0;        // points to the first element of array
    int current = 0;    // pointer to the current element
    int end = size - 1; // points to the last element of the array

    while (current <= end)
    {
        if (colors[current] == 0)
        {
            int temp = colors[srt];
            colors[srt] = colors[current];
            colors[current] = temp;
            srt++;
            current++;
        }
        else if(colors[current] == 1)
        {
            current++;
        }
        else
        {
            int temp = colors[end];
            colors[end] = colors[current];
            colors[current] = temp;
            end--;
        }
    }
}
int main()
{
    int colors[] = {2,0,2,1,1,0,1,0,1,0}; // 0-> Red, 1-> White, 2->Blue
    int size = sizeof(colors) / sizeof(colors[0]);
    sortColors(colors, size);
    printf("After Sorting: \n");
    for (int i = 0; i <size; i++)
    {
        printf("%d ", colors[i]);
    }
    return 0;
}