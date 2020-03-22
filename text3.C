#include<stdio.h>>

int main()
{
	int i,j;
	for(i=0;i<9;i++)
	{
		if(i<5)
		{
			for(j=0;j<5-i;j++)
			{
				printf("бс");
			}
		}
		else
		{
			for(j=0;j<=i-4;j++)
			{
				printf("бс");
				
			}
		}
		printf("\n");
	}
	return 0;
}
