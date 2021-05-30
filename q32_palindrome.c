#include<stdio.h>
#include<conio.h>

int main()
{
	
	int a[200],n,m,c,i,t;
	
	printf("welcome\nenter value= ");
	scanf("%d",&n);
				
	i=0;
	for(m=n;n!=0;)
	{
		a[i++]=n%10;
		n=n/10;
	}
	
	c=1;
	for(i--;i>=0;i--)
	{
		n=n+a[i]*c;
		c=c*10;
	}

	if(m==n)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

  getch();
}
