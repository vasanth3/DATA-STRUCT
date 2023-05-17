#include <stdio.h>
int main()
{
  int A[10], i, n,flag=0,key,mid,First,Last;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter  integer(s)\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", & A[i]);

  printf("Enter a number \n");
  scanf("%d", &key);
  flag=0;
  First=0;
  Last= n-1;
  while(First<=Last)
  {
  	mid=(First+Last)/2;
  	if(A[mid] == key)
  	{
  		flag=1;
  		break;
	  }
	  else if( A[mid] < key)
	  First = mid +1;
	  else if(A[mid]> key)
	     Last = mid -1;
  }
  for (i = 0; i < n; i++)
  {
    if (A[i] == key)    
    {
      printf("%d element in the array found %d.\n", key, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d array element not found.\n", key);

  return 0;
}