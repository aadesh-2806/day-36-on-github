#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	long f;
	//clrscr();
	printf("Enter value: ");
	scanf("%d",&n);
	i=n;
	f=1;
	while(i>=1)
	{
		f=f*i;
		i=i-1;
	}
	printf("Result = %ld",f);
	getch();
}
