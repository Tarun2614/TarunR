#include<stdio.h>
int main()
{
    int b, n, p=1;
    scanf("%d %d",&b,&n);
    while(n!=0)
    {
       p*=b;
        --n;
    }
    printf("%d",p);
    return 0;
}
