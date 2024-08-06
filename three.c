#include<stdio.h>
int main()
{
    int i,j,p;
    

    for(i=1;i<=5;i++)
    {
        p=5;//use when the value in the col are same in the coloumns 
        for(j=1;j<=i;j++)
        {
            printf("%d",p);

              p--;

        }
        printf("\n");

      
    }
}