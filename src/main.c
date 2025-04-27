#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, lines, words, characters, state;

    lines = words = characters = 0;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        ++characters;

        if (c == '\n')
        {
            ++lines;
        }

        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++words;
        }
    }

    printf("%8d%8d%8d\n", lines, words, characters);

    return 0;
}
