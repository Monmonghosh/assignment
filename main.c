
#include<stdio.h>
int main()
{
    int limit, temp1=1, temp2=1, backup=0;
    printf("ENTER THE LIMIT: \n");
    scanf("%d",&limit);

    for(int i=0;i<=limit;i++)
    {
        for(int j=0;j<temp1;j++)
        {
            printf("* ");
        }
        printf("\n");
        backup=temp2;
        temp2=temp1+temp2;
        temp1=backup;
    }
}