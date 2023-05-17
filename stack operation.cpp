#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1,STK[MAX];

void push()
{
	int ele;
	if(top==MAX-1)
	printf("Stack is full");
	else
	{
	    printf("Enter the elements to be inserted:");
		scanf("%d",&ele);	
		top=top+1;
		STK[top]=ele;
	}
}
void pop()
{
	int ele;
	if(top==-1)
	printf("The stack is empty");
	else
	top=top-1;
	printf("The deleted element=%d",ele);
}
void peek()
{
	if(top==-1)
	printf("The stack is empty");
	else
	printf("The top element=%d",STK[top]);
}
void display()
{
	int i;
	if(top==-1)
	printf("The stack is empty");
	else
	for(i=top;i>=0;i--)
	printf("%d\n",STK[i]);
}
int main()
{
	int cho;
	do
	{
		printf("\n main menu \n");
		printf("\n1. push");
		printf("\n2. pop");
		printf("\n3. peek");
		printf("\n4. display");
		printf("\n5. exit");
		printf("\n Enter your choice:");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:peek();break;
			case 4:display();break;
			case 5:exit(0);break;
			default:
			printf("enter the choice between 1 to 5");
		}
	}
	while(cho>=1&&cho<=5);
	return 0;
}
