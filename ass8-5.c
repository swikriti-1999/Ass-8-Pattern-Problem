#include<stdio.h>
int main()
{
    int r,c;
    for(r=0;r<=4;r++)
    {
        for(c=0;c<=8;c++)
        {
            if(c>=4-r && c<=4+r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
return 0;
}