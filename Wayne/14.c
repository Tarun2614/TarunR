#include<stdio.h>
int main()
{
    int a,b,num;
    scanf("%d %d",&a,&b);
    for(num=a;num<=b;num++)
    {
        if(num%2==1)
        {
            printf("%d",num);
        }
    }
   
}
