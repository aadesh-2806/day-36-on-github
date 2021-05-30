#include<stdio.h>
#include<math.h>

void main()
{	
	int n,j,t,x,y,r;
	float s;
	
	printf("hello\nenter x,y,radius=");
	scanf("%d%d%d",&x,&y,&r);
	printf("enter x,y of pt=");
	scanf("%d%d",&n,&t);
	
	s=pow(((x-n)*(x-n)+(y-t)*(y-t)),0.5);
	if(s>r)
	{
		printf("outside circle");
	}
	else
	{
		if(s==r)
		{
			printf("on circle");
		}
		else
		{
			printf("inside circle");
		}
	}
	getch();
}
