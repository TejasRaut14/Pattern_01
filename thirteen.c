#include<stdio.h>
int main()
{
    int i,j;
    char p;

  

    for(i=5;i>=1;i--)
    {
        p='E';
        for(j=1;j<=i;j++)
        {
            printf("%c",p);
            p--;
        }
        printf("\n");
    }
    return 0;
}