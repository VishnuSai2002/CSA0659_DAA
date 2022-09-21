#include<stdio.h>
void main()
{
int n,r,i,j,c[100][100];
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the value of r:");
scanf("%d",&r);
for(i=0;i<=n;i++)
{
for(j=0;j<=r;j++)
{
if((j==0)||(j==i))
{
c[i][j]=1;
}
else
{
c[i][j]=c[i-1][j-1]+c[i-1][j];
}
}
}
printf("\n the result is %d",c[n][r]);
}
