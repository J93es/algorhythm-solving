#include <stdio.h>

int main(void)
{
    char    str[101];

    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
        else if ('a' <= str[i] && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
    }
    printf("%s", str);
}