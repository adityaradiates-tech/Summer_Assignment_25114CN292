#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,r1,c1,r2,c2;

    printf("enter rows and columns of first matrix:");
    scanf("%d%d",&r1,&c1);
    
    printf("enter number of column:");
    scanf("%d%d",&r2,&c2);
     
    if(c1!=r2)
    {
        printf("matrix multiplication is not possible.");
        return 0;
    }

    printf("enter elements of first matrix:\n");
    for(i=0;i<r1;i++)
    {
       
        for(j=0;i<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
printf("enter elements of second matrix:\n");
for(i=0;i<r2;i++)
{
   for(j=0;i<c2;j++)

    {
        scan("%d",&b[i][j]);
    }



}


#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,row,col;

    printf("enter number of rows:");
    scanf("%d",&row);
    
    printf("enter number of column:");
    scanf("%d",&col);

    printf("enter elements of first matrix:\n");
    for(i=0;i<row;i++)
    {
       
        for(j=0;i<column;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
printf("enter elements of second matrix:\n");
for(i=0;i<row;i++)
{
   for(j=0;i<col;j++)

    {
        scan("%d",&b[i][j]);
    }



}

for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

}







