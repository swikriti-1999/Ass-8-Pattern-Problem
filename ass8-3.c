#include<stdio.h>
int main()
{
    int c,r;
    for(r=1;r<=5;r++)
    {
        for(c=5;c>=r;c--)
        {
            printf(" * ");
        }
    printf("\n");
    }
return 0;
}