#include <stdio.h>
int main()
{int x,n,p=1;
    printf("enter x and n:");
    scanf("%d%d",&x,&n);
    while(n>0){
        p=p*x;
        n--;

    }
    printf("answer=%d",p);
    return 0;
}