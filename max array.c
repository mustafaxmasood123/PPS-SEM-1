#include<stdio.h>
void main()

{
int m[5],i,max;
printf("enter 5 values");

for(i=0;i<5;i++)
scanf("%d",&m[i]);
max=m[0];
for (i=0;i<5;i++)
{
if (m[i]>max)
{
max=m[i];

}

}

}
