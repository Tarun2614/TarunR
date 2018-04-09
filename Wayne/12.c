#include<stdio.h>
int main()
{
    int a,temp,b,r;
    scanf("%d",&a);
    temp=a;
    while(temp!=0)
    {
        r=temp%10;
        b=b*10+r;
        temp/=10;
    }
    if(b==a)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
