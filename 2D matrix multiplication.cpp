#include<stdio.h>
int main()
{
	int i,j,k,n,m,l,A[5][5],B[5][5],C[5][5];
	printf("enter the size of the array n,m,l");
	scanf("%d %d %d",&n,&m,&l);
		
	printf("enter the A matrix elements");
		
	for(i=0;i<n;i++)
	     for(j=0;j<m;j++)
	         scanf("%d",&A[i][j]);
	printf("enter the B matrix elements");
	
	for(j=0;j<m;j++)
	   for(k=0;k<1;k++)
	       scanf("%d",&B[j][k]);
	for(i=0;i,n;i++)
	{
		for(k=0;k<1;k++)
		 {
		 	C[i][k]=0;
		 	for(j=0;j<m;j++)
		 	{
		 		C[i][k] = C[i][k] + A[i][j] * B[j][k];
		 		
			 }
		 }
	}
	printf("\n The c matrix output \n");
	for(i=0;i<n;i++)
	{
		for(k=0;k<1;k++)
		{
			printf("%d\t",C[i][k]);
		}
	   return 0;
	}
}