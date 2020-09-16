/////////////////////////////////////////////////////////////////////////////////////////////
// 25.Write a program which inserts the node in singly linear linked list at the
// last position.
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//Function Protptype
int InsertAtLast(struct Node **);
void Display(struct Node *);
struct Node * TraverTillLast(struct Node *);

struct Node
{
	int data;
	Node *next;
};

int main()
{
	struct Node *first=NULL;

	// Function call
	InsertAtLast(&first);
	InsertAtLast(&first);
	InsertAtLast(&first);
	InsertAtLast(&first);
	InsertAtLast(&first);
	InsertAtLast(&first);
	InsertAtLast(&first);
	InsertAtLast(&first);
	
	printf("\n The linked list is => ");
	Display(first);
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	:		InsertAtLast
//
//		Input			:		Address of first node of the list
//
//		Return			:		int
//
//		Description		:		This function insert node at the end of linked list by using recursion.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Node*  TraverseTillLast(struct Node *head)
{
	static struct Node *temp=head;
	if(temp->next!=NULL)
	{
		temp=temp->next;
		TraverseTillLast(temp);
	}
	return temp;

}
int InsertAtLast(struct Node **head)
{
	struct Node *newnode=NULL;
	struct Node *temp=NULL;

	//allocate memory for newnode
	newnode=(struct Node *)malloc(sizeof(struct Node));

	//check whether memory is allocated or not
	if(newnode == NULL)
		return 0;

	//assign NULL to next pointer
	newnode->next=NULL;

	//accept data from user
	printf("\n Enter data => ");
	scanf("%d",&newnode->data);

	if(*head == NULL)
	{
		*head=newnode;
	}
	else
	{
		temp=*head;
		temp=TraverseTillLast(temp);
		temp->next=newnode;
	}

	return 1;
}

void Display(struct Node *head)
{
	if(head == NULL)
	{
		return;
	}

	while(head)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("\n");
}
/////////////////////////////////////////////////////////////////////////////////////////
//
//			Input		:	10 20 30 40 50
//
//			Output		:	Linked list is => 10 20 30 40 50
//							  
//											
//
/////////////////////////////////////////////////////////////////////////////////////