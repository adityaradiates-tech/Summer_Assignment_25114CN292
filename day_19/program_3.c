#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,row,col;

    printf("enter number of rows:");
    scanf("%d",&row);
    
    printf("enter number of column:");
    scanf("%d",&col);

    printf("enter matrix elements:\n");
    for(i=0;i<row;i++)
    {
       
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
printf("transpose of the matrix:\n");
for(i=0;i<col;i++)
{
   for(j=0;i<col;j++)

    {
        printf("\n%d",a[j][i]);
    }


return 0;
}


}


