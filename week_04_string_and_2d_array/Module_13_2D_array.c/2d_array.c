#include <stdio.h>
int main()
{
    int row=4,col=3,array[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            scanf("%d",&array[i][j]);
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d ",array[i][j]);
        printf("\n");
    }

    return 0;
}
