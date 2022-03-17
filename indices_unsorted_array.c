#include<stdio.h>
int main()
{
    int i,n,j,k,arr[n],max,min;
    printf("Enter the limit of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        if(arr[i]>arr[i+1])
        break;
    }
    /*if(i==n-1)
    {
        printf("The total array is sorted\n");
    }*/
    for(j=n-1;j>=0;j--)
    {
        if(arr[j]<arr[j-1])
        break;
    }
    max=arr[i];
    min=arr[i];
    for(k=i+1;k<=j;k++)
    {
        if(arr[k]>min)
            max=arr[k];
        if(arr[k]<max)
            min=arr[k];
    }
    for( k = 0; k < i; k++)
    {
        if(arr[k] > min)
        { 
            i = k;
            break;
        }     
    }
    for( k = n -1; k >= j+1; k--)
    {
        if(arr[k] < max)
        {
            j= k;
            break;
        }
    } 
    printf(" The indices having unsorted array %d and %d\n", i, j);
}