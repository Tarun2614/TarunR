#include <stdio.h>

int main(void) {
int i,k,n[5],sum=0;
for(i=0;i<5;i++)
{
    scanf("%d",&n[i]);
}

scanf("%d",&k);
for(i=0;i<k;i++)
{
    sum=sum+n[i];
}
printf("%d",sum);
	return 0;
}
