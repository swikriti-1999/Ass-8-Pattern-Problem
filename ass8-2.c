#include<stdio.h>
int main()
{
    int c,r;
    for(r=5;r>=1;r--)
    {
        for(c=1;c<=5;c++)
        {
            if(c<r)
                printf(" ");
            else
                printf("*");
        }
    printf("\n");
    }
return 0;
}