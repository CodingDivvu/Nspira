#include <stdio.h>
int main()
{
	int j,i;
	
	printf("The state are the doors in after the last pass:\n");
	for(j=1;j<=100;j++)
	{
	  int c=0;
	  for(i=1;i<=j;i++)
	  {
	   if(j%i==0)
	   {
		c++;
	   }
	}
	if(c%2!=0)
	{
	 printf("%d door opened\n",j);
	}
   }
}
