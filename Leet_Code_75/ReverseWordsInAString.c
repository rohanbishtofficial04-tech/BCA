#include <stdio.h>
#include <string.h>
void reverse(char *srt, char *end)
{
    while (srt < end)
    {
        char temp = *srt;
        *srt++ = *end;
        *end-- = temp;
    }
}
void reverseWordsInAString(char *str)
{
    char *beginning = str;
    char *temp = str;
    while (*temp != '\0')
    { // to find the end of the string
        temp++;
    }
    reverse(str, temp - 1); // reverse the whole string
    temp = beginning; //or temp = str;
    while (1)
    {
        while (*temp != '\0' && *temp == ' ')
        {
            temp++;
        }
        if (*temp == '\0')
        {
            break;
        }
        beginning = temp;
        while (*temp != '\0' && *temp != ' ')
        {
            temp++;
        }
        reverse(beginning, temp - 1);
    }
}
int main()
{
    char str[100];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    reverseWordsInAString(str);
    printf("The Reversed String:\n");
    printf("%s", str);
    return 0;
}