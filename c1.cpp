#include<stdio.h>
int main()
{
    int rows=5;
    for(int i=0;i<2*rows-1;i++)
    {
        int a;
        if(i<rows)
        {
            a=2*i+1;
        }
        else
        {
            a=2*(2*rows-i)-3;
        }
        for(int j=0;j<a;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*rows-a;k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}