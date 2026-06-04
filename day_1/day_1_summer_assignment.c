#include<stdio.h>
 int main()
 {
    int n,sum;
    printf("enter value of n:");
    scanf("%d",&n);
    
    sum=n*(n+1)/2;printf("sum of first %d natural numbers=%d",n,sum);    
    return 0;  
 }