#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=5;r++)
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