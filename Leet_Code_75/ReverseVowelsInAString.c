#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
bool vowelCheck(char c)
{
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else
        return false;
}

void reverseVowels(char *str)
{
    int left = 0, right = strlen(str) - 1;
    while (left < right)
    {
        while (left < right && !vowelCheck(str[left]))
        {
            left++;
        }
        while (left < right && !vowelCheck(str[right]))
        {
            right--;
        }

        if (left < right)
        {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }
}
int main()
{
    char str[50];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    reverseVowels(str);
    printf("%s", str);
    return 0;
}