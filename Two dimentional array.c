#include <stdio.h>
int main()
{
	int a,b;
	int item [2][3];
	printf ("enter the values");
	for (a=0;a<2;a++)
	{
		for (b=0;b<3;b++)
		{
			scanf("%d",&item[a][b]);
		}
	}
	printf("Display the items");
	for(a=0;a<2;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("%d",item[a][b]);
			if(b==2)
			{
			printf("/n");
			}
		}
	}
	return 0;
}