#include <stdio.h>
void main()
{ int a[100],i,n,j=0,temp;

    printf("enter number of elements:");
    scanf("%d",&n);

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

for (i=0;i<n;i++)
{
  if a[i]!=0; 
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    j++;
}
}

printf("array after moving zeroes to end:\n");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}


}