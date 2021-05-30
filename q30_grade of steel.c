#include<stdio.h>
#include<math.h>
void main()
{
	
	int a,c;
	float b;
	printf("hello\nenter hardness=");		//grade of steel
	scanf("%d",&a);
	printf("enter carbon content=");
	scanf("%f",&b);
	printf("enter tensile strength=");
	scanf("%d",&c);
	
	if(a>50 && b<0.7 && c>5600)
	{
		printf("grade is 10");
	}

		if(a>50 && b<0.7)
		{
			printf("grade is 9");
		}
		else
		{
			if(b<0.7 && c>5600)
			{
				printf("grade is 8");
			}
			else
			{
				if(a>50 && c>5600)
				{
					printf("grade is 7");
				}
				else
				{
					if(a>50 || b<0.7 || c>5600)
					{
						printf("grade is 6");
					}
					else
					{
						printf("grade is 5");
					}
				}
			}
		}
		
	getch();
	
}
