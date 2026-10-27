#include <stdio.h>
#include <string.h>
int gcd(int a, int b)
{
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

char *gcdOfStrings(char *str1, char *str2, char *result)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char concat1[len1+len2+1], concat2[len1+len2+1];
    strcpy(concat1, str1);
    strcat(concat1, str2);

    strcpy(concat2, str2);
    strcat(concat2, str1);

    if (strcmp(concat1, concat2) == 0)
    {
        int gcdLength = gcd(len1, len2);
        strncpy(result, str1, gcdLength);
        result[gcdLength] = '\0';
        return result;
    }
    return "";
}

int main()
{
    char str1[] = "ABCABCABCABCABCABC";
    char str2[] = "ABCABC";
    char result[100];

    printf("GCD of strings: %s\n", gcdOfStrings(str1, str2, result));
    return 0;
}
