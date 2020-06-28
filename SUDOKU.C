#include <conio.h>
#include <stdio.h>
void main()
{
int ctr=0,a[9][9],i,j,k,c,d,count=0;
clrscr();
for(i=0;i<9;i++)
{
 for(j=0;j<9;j++)
 {
 scanf("%d",&a[i][j]);
 }
}
printf("\n");
do
{
ctr=0;
for(i=0;i<9;i++)
{
	for(j=0;j<9;j++)
	{

		if(a[i][j]==0)
		{
		   ctr++;
		   for(k=1;k<=9;k++)
		   {
			for(c=0;c<9;c++)
			{
			if(k==a[i][c] || k==a[c][j])
			break;
			if((i==0 || i==3 || i==6)&&(j==0 || j==3 || j==6))
			{
				if(k==a[i+1][j+1] || k==a[i+1][j+2] || k==a[i+2][j+1] || k==a[i+2][j+2])
				break;
			}
			else if((i==0 || i==3 || i==6)&&(j==1 || j==4 || j==7))
			{
				if(k==a[i+1][j-1] || k==a[i+1][j+1] || k==a[i+2][j-1] || k==a[i+2][j+1])
				break;
			}
			else if((i==0 || i==3 || i==6)&&(j==2 || j==5 || j==8))
			{
				if(k==a[i+1][j-1] || k==a[i+1][j-2] || k==a[i+2][j-1] || k==a[i+2][j-2])
				break;
			}
			else if((i==1 || i==4 || i==7)&&(j==0 || j==3 || j==6))
			{
				if(k==a[i-1][j+1] || k==a[i-1][j+2] || k==a[i+1][j+1] || k==a[i+1][j+2])
				break;
			}
			else if((i==1 || i==4 || i==7)&&(j==1 || j==4 || j==7))
			{
				if(k==a[i-1][j-1] || k==a[i-1][j+1] || k==a[i+1][j+1] || k==a[i+1][j-1])
				break;
			}
			else if((i==1 || i==4 || i==7)&&(j==2 || j==5 || j==8))
			{
				if(k==a[i-1][j-1] || k==a[i-1][j-2] || k==a[i+1][j-1] || k==a[i+1][j-2])
				break;
			}
			else if((i==2 || i==5 || i==8)&&(j==0 || j==3 || j==6))
			{
				if(k==a[i-1][j+1] || k==a[i-1][j+2] || k==a[i-2][j+1] || k==a[i-2][j+2])
				break;
			}
			else if((i==2 || i==5 || i==8)&&(j==1 || j==4 || j==7))
			{
				if(k==a[i-1][j-1] || k==a[i-2][j-1] || k==a[i-1][j+1] || k==a[i-2][j+1])
				break;
			}
			else if((i==2 || i==5 || i==8)&&(j==2 || j==5 || j==8))
			{
				if(k==a[i-1][j-1] || k==a[i-2][j-1] || k==a[i-1][j-2] || k==a[i-2][j-2])
				break;
			}
			}
			if(c==9)
			{
			count++;
			d=k;
			}
		   }
		   if(count==1)
		   {
		   a[i][j]=d;
		   count=0;
		   }
		   else
		   count=0;
		}
  }
}
}
while(ctr>0);
printf("\n");
for(i=0;i<9;i++)
{
 for(j=0;j<9;j++)
 {
 printf("%d ",a[i][j]);
 }
 printf("\n");
}
getch();
}