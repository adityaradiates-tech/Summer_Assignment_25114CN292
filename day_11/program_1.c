#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    result = add(a, b);
    printf("The sum of %d and %d is: %d\n", a, b, result);
    return 0;
}