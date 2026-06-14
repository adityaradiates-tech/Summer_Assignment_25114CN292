#include<stdio.h>
int palindrome(int n)
{
    int rev=0,rem,temp;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
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
    if(palindrome(n))
    {
        printf("%d is a palindrome number.",n);
    }
    else
    {
        printf("%d is not a palindrome number.",n);
    }
    return 0;
}