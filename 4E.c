#include<stdio.h>
int main()
{
int n,hex=0,i=1,rem;
printf("enter decimal number");
scanf("%d",&n);
while(n!=0)
{
rem=n%16;
hex=hex+rem*i;
n=n/16;
i=i*10;
}
printf("hex=%d",hex);

return 0;

}
