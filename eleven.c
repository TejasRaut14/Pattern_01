#include<stdio.h>
int main()
{
    int i,j,p;

    p=1;

    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",p);
        }
        printf("\n");

        p++;
    }
    return 0;
}