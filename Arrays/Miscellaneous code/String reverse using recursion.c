#include <stdio.h>
#include<string.h>

void reverse(char str[], int start, int end)
{
    if (start >= end)
        return;

    str[start] = str[start] ^ str[end];
    str[end]   = str[start] ^ str[end];
    str[start] = str[start] ^ str[end];

    reverse(str, start + 1, end - 1);
}

int main()
{
    char str[] = "string";
    int len = strlen(str);

    //while (str[len] != '\0')
      //  len++;

    reverse(str, 0, len - 1);

    printf("%s", str);
    return 0;
}
