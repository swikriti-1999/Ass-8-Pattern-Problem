#include <stdio.h>
int main()
{
    int r, c, count;
    for (r = 0; r <4; r++)
    {
        count = 0;
        for (c = 0; c < 4; c++)
        {
            if (c < r)
                printf(" ");
            else
                printf("%d", ++count);
        }
        for(c=4 ;count>1;c--)
        {
            printf("%d", --count);
            
        }
        printf("\n");
    }
    return 0;
}