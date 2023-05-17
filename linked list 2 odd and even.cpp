#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL,*p,*t,*newnode;

void create()
{
	int n,i,ele;
	printf("Enter the no of elements in the list:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=head;
		}
		else{
			for(p=head; p->next!=NULL; p=p->next);
			p->next=newnode;
			p=newnode;
		}
	}
}

void display()
{
	if(head==NULL)
	printf("The SLL is empty");
	else
	{
		for(p=head;p!=NULL;p=p->next)
		printf("%d->",p->data);
	}
	
}

void insert_at_begin()
{
	int ele;
	printf("Enter the element to be inserted:");
	scanf("%d",&ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	p=head;
	newnode->next=p;
	head=newnode;
	p=newnode;
}

void insert_at_end()
{
	int ele;
	printf("Enter the element to be inserted:");
	scanf("%d",&ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}

void insert_at_anyposition()
{
	int ele,pos,i;
	printf("Enter the element to be inserted:");
	scanf("%d",&ele);
	printf("Enter the position of the element:");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	for (i=1,p=head;i<pos;i++,p=p->next)
	t=p;
	t->next=newnode;
	newnode->next=p;
	p=newnode;
}

void delete_at_begin()
{
	int ele;
	p=head;
	ele=p->data;
	head=p->next;
	free(p);
	p=head;
	printf("The deleted element=%d",ele);
}

void delete_at_end()
{
	int ele;
	for(p=head;p->next!=NULL;p=p->next)
	t=p;
	ele=p->data;
	t->next=NULL;
	free(p);
	p=t;
	printf("The deleted element=%d",ele);
}

void delete_at_anyposition()
{
	int ele,pos,i;
	printf("Enter the position");
	scanf("%d",&pos);
	for(i=1,p=head;i<pos;i++,p=p->next)
	t=p;
	t->next=p->next;
	free(p);
	p=t;
	printf("The deleted element=%d",ele);
}
void Even_Odd_Count() 
{
    int evenCount = 0;
    int oddCount = 0;
    
    while (head != NULL) {
        if (head->data % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        head = head->next;
    }
    
    printf("Even elements count: %d\n", evenCount);
    printf("Odd elements count: %d\n", oddCount);
}
void print_Alternate_elements()
{
    if(head==NULL)
    printf("The SLL is empty");
    else
    {
	for(p=head;p!=NULL;p=p->next)
	{
	 printf("%d ->",p->data);
	 p=p->next;
}
}
}
void search_element()
{
	int key,flag=0,pos,i;
	printf("enter the key");
	scanf("%d",&key);
	
	for(i=1,p=head;p!=NULL;i++,p=p->next)
	{
		if(p->data==key)
		{
			flag=1;
			pos=1;
			break;
			
		}	
			
	}
	if(flag==1)
	printf("The element in %d position",pos);
	else
	printf("The element Not is list");
}

       
int main()
{

	int cho;
	do
	{
		printf("\n main menu \n");
		printf("\n1. create");
		printf("\n2. display");
		printf("\n3. insert_at_begin");
		printf("\n4. insert_at_end");
		printf("\n5. insert_at_anyposition");
		printf("\n6. delete_at_begin");
		printf("\n7. delete_at_end");
		printf("\n8. delete_at_anyposition");
		printf("\n9.Even_Odd_Count()");
		printf("\n10.print_Alternate_elements");
		printf("\n11. exit");
		printf("\n Enter your choice:");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1:create();break;
			case 2:display();break;
			case 3:insert_at_begin();break;
			case 4:insert_at_end();break;
			case 5:insert_at_anyposition();break;
			case 6:delete_at_begin();break;
			case 7:delete_at_end();break;
			case 8:delete_at_anyposition();break;
		    case 9:Even_Odd_Count();break;
			case 10:print_Alternate_elements();break;
			case 11:exit(0);
			default:
			printf("enter the choice between 1 to 11");
		}
	}
	while(cho>=1&&cho<=11);
	return 0;
}