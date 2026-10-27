#include<iostream>
#include<string.h>
using namespace std;
void MergeAlternatively(char str1[], char str2[])
{
    int a = sizeof(str1);
    int b = sizeof(str2);
    char str3[a + b];
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i = 0, j = 0, k = 0;

    while (i < len1 && j < len2)
    {
        str3[k++] = str1[i++];
        str3[k++] = str2[j++];
    }

    // if there are some remaining characters in str1
    while (i < len1)
    {
        str3[k++] = str1[i++];
    }

    // if there are some remaining characters in str2
    while (j < len2)
    {
        str3[k++] = str2[j++];
    }

    // To terminate string
    str3[k] = '\0';

    cout<<str3;
}
int main()
{
    char word1[] = "abcd";
    char word2[] = "pqrs";
    MergeAlternatively(word1, word2);
    return 0;
}