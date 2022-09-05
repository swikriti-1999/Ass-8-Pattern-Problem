#include <stdio.h>
int main()
{
    int r, c;
    char ch;
    for (r = 0; r <= 6; r++)
    {
        ch = 'A';
        for (c = 0; c <= 6; c++)
        {
            if (c <= 6 - r)
                printf("%c", ch++);
            else
                printf(" ");
        }
        if (r == 0)
        {
            ch--;
            while (c <= 12)
            {
                printf("%c", --ch);
                c++;
            }
        }
        if (r != 0)
        {
            for (c = 7; c <= 12; c++)
            {
                if (6 + r <= c)
                    printf("%c", --ch);
                else
                    printf(" ");

            }
        }
        printf("\n");
    }
    return 0;
}