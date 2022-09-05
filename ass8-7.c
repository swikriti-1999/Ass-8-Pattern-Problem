#include<stdio.h>
int main()
{
    int r,c;
    for(r=0;r<=4;r++)
    {
        for(c=0;c<=10;c++)
        {
            if(r==0)
                printf("*");
            else
            if(c>=5-r && c<=5+r)
                printf(" ");
            else
                printf("*");
            
        }
        printf("\n");
    }
return 0;
}