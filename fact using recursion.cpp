#include<stdio.h>
int fact(int n)
{
	if(n==1)
	   return 1;
	
	else
	  return n*fact(n-1);
	
}
int main(){
	int n,f=1,i;
	printf("enter the value:");
	scanf("%d",&n);
	if(n!=0)
	  f= fact(n);
	printf("the fact is: %d",f);
}