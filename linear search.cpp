#include <stdio.h>
int main()
{
  int A[10], i, n,flag=0,key;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", & A[i]);

  printf("Enter a number \n");
  scanf("%d", &key);

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