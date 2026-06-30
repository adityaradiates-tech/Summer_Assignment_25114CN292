#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,row,col;

    printf("enter the order of square matrix:");
    scanf("%d",&n);
    
    
    printf("enter matrix elements:\n");
    for(i=0;i<n;i++)
    {
       
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }

for(i=0;i<n;i++)

   

    {
      sum=sum+a[i][i];
    }

printf("sum of main diagonal =%d",sum);

return 0;
}





