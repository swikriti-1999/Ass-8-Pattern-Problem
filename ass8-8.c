#include<stdio.h>
int main()
{
    int r,c,count,sp;
    for(r=4;r>0;r--)
    {
        for(sp=0;sp<=r-2;sp++)
        {
            printf(" ");
        }
        count=0;
        for(c=r-2;c<3;c++)
        {
            printf("%d",++count);
        }
        for(c=3;c>r-1;c--)
        {
            printf("%d",--count);
        }
        printf("\n");
    }
    return 0;
}