#include <stdio.h>
int main()
{
    int r, c;
    for (r = 0; r <= 4; r++)
    {
        for (c = 0; c <= 3; c++)
        {
            if (c == 0 || c == r)
                printf("*");
            else
                printf(" ");

            if (r == 4)
            {
                for (c = 0; c < 4; c++)
                    printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}