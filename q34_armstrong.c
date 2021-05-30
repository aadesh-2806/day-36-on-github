#include<stdio.h>

int single(int ,int );
void main()
{
	int n,l,t,j,b,r,c[100];
	
	printf("hello\nenter value=");
	scanf("%d",&n);
	r=n;
	
	j=0;
	while(n!=0)
	{
		c[j]=n%10;
		n=n/10;
		j++;		
	}
	t=j;
	printf("digits=%d",t);	
	printf("\n");
	
	j=0;
	b=0;
	while(j<t)
	{
		b=single(c[j],t)+b;
		j++;
	}
	printf("armstrong value=%d",b);
	printf("\n");
	
	if(b==r)
	{
		printf("yes it is armstrong");
	}
	else
	{
		printf("it is not armstrong");
	}
	getch();
}

int single(int x,int y)
{
	int i;
	if(y>0)
	{
		y--;
		return x*single(x,y);
	}
	
	return 1;
}

