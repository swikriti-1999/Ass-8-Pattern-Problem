#include<stdio.h>
int main()
{
    int r,c;
    char ch;
    for(r=0;r<=4;r++)
    {
        ch='A';
        for(c=0;c<=4;c++)
        {
            if(c>=4-r)
            printf("%c",ch++);
            else
            printf(" ");
        }
        ch--;
        for(c=5;c<5+r;c++)
        {
            if(r==0 || c<5)
            printf(" ");
            else
            printf("%c",--ch);
        }
    printf("\n");
    }
return 0;
}