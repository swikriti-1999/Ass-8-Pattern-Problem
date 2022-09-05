#include<stdio.h>
int main()
{
    int r,c;
    char ch;
    for(r=0;r<=3;r++)
    {
        ch='A';
        for(c=0;c<=3;c++)
        {
            if(c>=r && c<=3)
            printf("%c",ch++);
            else
            printf(" ");
        }
        ch--;
        for(c=4;c<=6-r;c++)
        {
            printf("%c",--ch);
        }
        printf("\n");
    }
    return 0;
}