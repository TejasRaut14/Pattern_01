#include<stdio.h>
int main()
{
    char p;
    int i,j;



    for(i=1;i<=5;i++)
    {
        p='A';
        for(j=1;j<=i;j++)
        {
            printf("%c",p);
            p++;
        }
        printf("\n");
        
    }
}