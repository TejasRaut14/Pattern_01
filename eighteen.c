#include<stdio.h>
int main()
{
    int i,j,k,p;
    for(i=1;i<=5;i++)
    {
        p=5;
        for(k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",p);
            p--;
        }
        printf("\n");
    }
}