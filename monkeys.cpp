#include<stdio.h>
int main()
{
	int i;
	printf("The state are the doors in after the last pass:\n");
	for(i=1;i<100;i++)
	{
		if(i*i<100)
		{
			printf("%d opened\n",i*i);
		}
	
	}
	return 0;

}
