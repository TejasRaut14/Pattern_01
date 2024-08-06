#include<stdio.h>
int main()
{
    int i,j,p;
    p=5;//value are not same in coloumns then use p=5 in this position

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",p);

        }
        printf("\n");

        p--;
    }
}