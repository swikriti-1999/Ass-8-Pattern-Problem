#include<stdio.h>
int main()
{
    int r,c;
    for(r=0;r<=3;r++)
    {
        if(r<=2)
        {
            for(c=0;c<=18;c++)
            {
                if(c>=2-r && c<=6+r) 
                printf("*");
                else
                if(c>=12-r && c<=16+r)
                printf("*");
                else
                printf(" ");
            }
        }
        if(r==3)
        {
            for(c=0;c<=15;c++)
            {
                if(c<=6 || c>=12)
                printf("*");
                if(c==6)
                printf(" MYSIRG ");
            }
        
        }
        printf("\n");
    }
    for(r=1;r<=9;r++)
     {
        for(c=0;c<=18;c++)
        {
            if(c>=r && c<=18-r)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
     }
    return 0;
}