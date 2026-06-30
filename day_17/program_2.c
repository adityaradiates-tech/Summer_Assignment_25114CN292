#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    int b[5] = {6,7,8,9,10};
    int i,j,found;

    printf("union of array:");
     
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<5;i++)
    {
        found=0;
        for(j=0;j<5;j++)

    {
        if (b[i] == a[j])
          {
            found=1;
            break;
          }

    }

    if(found==0)
      {
          printf("%d",b[i]);
      }
    }
return 0;
}