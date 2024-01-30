#include <stdio.h>

int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
    {

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - 'A' + 'a';
        }

        putchar(ch);
    }

    return 0;
}