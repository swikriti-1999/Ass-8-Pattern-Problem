#include<stdio.h>
int main()
{
    int r,c,count,j;
    for(r=0;r<4;r++)
    {
        count=0;
        for(c=0;c<4-r;c++)
        {
            printf("%d",++count);
        }
        for(c=0;c<2*r-1;c++)
        {
            printf(" ");
        }
        if(r==0)
        count--;
        while(count)
        printf("%d",count--);
        printf("\n");
    }
    return 0;
}