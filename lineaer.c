#include<stdio.h>
void main()
{
int m[5],i,key,s=0;
printf("enter 5 values");

for(i=0;i<5;i++)
scanf("%d",&m[i]);

 printf("enter key values to be searched");
scanf("%d",&key);

for(i=0;i<5;i++)

{
if(key==m[i])
{
s=1;

break;


}
}
if (s==1)
printf("element found at %d",i+1);

else
printf("element not found");
}






