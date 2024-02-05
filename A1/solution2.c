// PID: 730561624
// I pledge the COMP 211 honor code.

#include <stdio.h>

#define MAX_LEN 51
#define MAX_BAD_LINES 100

int main()
{
    int indexCount = 0;
    int lineCounter = 0;
    int offendingLinesNum = 0;
    int offendingLines[MAX_BAD_LINES];
    int ch;
    int isOffending = 0;
    while ((ch = getchar()) != EOF)
    {
        indexCount++;
        if (indexCount >= MAX_LEN)
        {
            if (isOffending == 0)
            {
                offendingLines[offendingLinesNum] = lineCounter;
                offendingLinesNum++;
                isOffending = 1;
            }
            putchar('\n');
            indexCount = 1;
        }
        if (ch == '\n')
        {
            isOffending = 0;
            lineCounter++;
            indexCount = 0;
        }

        putchar(ch);
    }

    printf("\nTotal lines over 50 chars: %d\nOffending lines: ",
           offendingLinesNum);

    for (int i = 0; i < offendingLinesNum; i++)
    {
        printf("%d, ", offendingLines[i]);
    }
    printf("\n");

    return 0;
}
