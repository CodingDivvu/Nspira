#include<stdio.h>
int main()
{
	int i,j,arr[100];
	for(i=0;i<100;i++)
	{
		printf("%d\n",arr[i]);
	}
	i=1;
	while(i<=100)
	{
		j=1;
		while(j<=100)
		{
			if(arr[j])
			{
				arr[j]=0;
			}
			else
			    arr[j]=1;	
		}
		j+=i;
	}
	i++;
	for(j=1;j<=100;j++)
	{
		if(arr[j])
		{
			printf("%d",j);
		}
	}
	return 0;
}
