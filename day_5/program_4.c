#include<stdio.h>
int main()
{
    int n,i; 
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=n;i>=2;i--)
    int j,prime=1;
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        {printf("largest prime number=%d",i);
        
        break;}
        
            
        
    }
}