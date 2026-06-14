#include<stdio.h>
int amstrong(int n)
{
    int sum=0,rem,temp;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(amstrong(n))
    {
        printf("%d is an amstrong number.",n);
    }
    else
    {
        printf("%d is not an amstrong number.",n);
    }
    return 0;
}