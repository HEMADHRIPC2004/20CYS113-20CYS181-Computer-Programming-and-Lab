#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int values[row*col];
    if(row!=col)
    {
        printf("Not a square matrix");
    }
    else
    {
        for(int i=0; i<row*col; i++)
        {
            scanf(" %d",&values[i]);
        }
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if (i>j)
                {
                    printf("0 ");
                }
                else
                {
                    printf("%d ", values[i*row+j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
