#include<stdio.h>
void Unsorted(int arr[], int n)
{
  int startingsortindex = 0, endingsortindex = n-1, i, max, min;  
  for (startingsortindex  = 0; startingsortindex  < n-1; startingsortindex ++)
  {
    if (arr[startingsortindex ] > arr[startingsortindex +1])
      break;
  }
  if (startingsortindex==n-1)
  {
    printf("[-1,-1]");
    return;
  }
  for(endingsortindex = n - 1; endingsortindex> 0; endingsortindex--)
  {
    if(arr[endingsortindex] < arr[endingsortindex-1])
      break;
  }
  max = arr[startingsortindex ]; min = arr[startingsortindex ];
  for(i = startingsortindex  + 1; i <= endingsortindex; i++)
  {
    if(arr[i] > max)
      max = arr[i];
    if(arr[i] < min)
      min = arr[i];
  }
  for( i = 0; i < startingsortindex ; i++)
  {
    if(arr[i] > min)
    { 
      startingsortindex = i;
      break;
    }     
  }
  for( i = n -1; i >= endingsortindex+1; i--)
  {
    if(arr[i] < max)
    {
      endingsortindex = i;
      break;
    }
  } 
  printf(" The indices having unsorted array %d and %d\n", startingsortindex , endingsortindex);
  return;
}
int main()
{
    int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    Unsorted(arr, arr_size);
    return 0;
}