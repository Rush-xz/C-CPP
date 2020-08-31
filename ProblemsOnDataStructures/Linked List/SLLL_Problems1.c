///////////////////////////////////////////////////////////////////////
//
//		Implementation Singly Linear Linked List ie.[SLLL].
//
///////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<malloc.h>
#define TRUE 1 
#define FALSE 0

typedef int BOOL;

//Structure of node of linked list
typedef struct Node
{
	int iData;
	struct Node *Next;
}NODE , *PNODE , **PPNODE;

//Global Declaration
void InsertFirst( PPNODE , int );
void DisplayEle(PNODE);
int FirstOccurance(PNODE , int);
int LastOccurance(PNODE , int);
int AdditionOfAllEle(PNODE);
int LargestElement(PNODE);
int SmallestElement(PNODE);


//Driver Function
int main()
{
	printf("\n--------------Implementation of Singly Linear Linked List---------------\n\n");

	PNODE Head = NULL;
	int iSize = 0 , iNo = 0 , i = 0 , iRet = 0;

	printf("Enter Number of Elements 	: ");
	scanf("%d",&iSize);

	printf("\nEnter the Elements 	:\n");
	for(i=0; i<iSize; i++)
	{
		scanf("%d",&iNo);
		InsertFirst(&Head , iNo);
	}

	printf("\nDisplay Elements 	:\n");
	DisplayEle(Head);

	printf("\n\nEnter the element(For First Occurance) 	:");
	scanf("%d",&iNo);
	iRet = FirstOccurance(Head , iNo);
	printf("First Occurance of %d is  : %d",iNo,iRet);

	printf("\n\nEnter the element(For Last Occurance) 	:");
	scanf("%d",&iNo);
	iRet = LastOccurance(Head , iNo);
	printf("Last Occurance of %d is  : %d",iNo,iRet);

	iRet = AdditionOfAllEle(Head);
	printf("\n\nAddition Of All Elements  	:%d",iRet);

	iRet = LargestElement(Head);
	printf("\n\nLargest Element from Linked List is  :%d",iRet);

	iRet = SmallestElement(Head);
	printf("\n\nSmallest Element from Linked List is  :%d",iRet);

}


////////////////////////////////////////////////////////////
//
//  Name        :InsertFirst
//  Input       :PPNODE , iNo
//  Returns     :void
//  Description :Insert elements in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void InsertFirst( PPNODE Head , int iNo)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	if( NULL == newn )
	{
		return;
	}

	newn -> iData = iNo;
	newn -> Next = NULL;

	if( *Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn -> Next = *Head;
		*Head = newn;
	}
}//End of InsertFirst()


////////////////////////////////////////////////////////////
//
//  Name        :DisplayEle
//  Input       :PNODE
//  Returns     :void
//  Description :Display elements in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void DisplayEle( PNODE Head )
{
	while( Head != NULL)
	{
		printf("| %d | -> ",Head->iData);
		Head = Head -> Next;
	}

	printf("NULL\n");
}//End of DisplayEle


////////////////////////////////////////////////////////////
//
//  Name        :FirstOccurance
//  Input       :PNODE , int
//  Returns     :int
//  Description :First Occurance of element in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
int FirstOccurance(PNODE Head , int iNo)
{
	int iPos = 0;

	while( Head != NULL)
	{
		++iPos;
		if( Head->iData == iNo)
		{
			break;
		}

		Head = Head -> Next;
	}

	if( Head == NULL)
	{
		return -1;			//Element not present in linked list
	}
	else
	{
		return iPos;		//returning position
	}
}//End of FirstOccurance


////////////////////////////////////////////////////////////
//
//  Name        :LastOccurance
//  Input       :PNODE , int
//  Returns     :int
//  Description :Last Occurance of element in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
int LastOccurance(PNODE Head , int iNo)
{
	int iCnt = 0 , iPos =-1;

	while( Head != NULL)
	{
		++iCnt;
		if( Head->iData == iNo)
		{
			iPos = iCnt;
		}

		Head = Head -> Next;
	}

	return iPos;

}//End of LastOccurance


////////////////////////////////////////////////////////////
//
//  Name        :AdditionOfAllEle
//  Input       :PNODE
//  Returns     :int
//  Description :Additon of All elements in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
int AdditionOfAllEle(PNODE Head )
{
	int iSum = 0;

	while( Head != NULL)
	{
		iSum = iSum + Head -> iData;

		Head = Head -> Next;
	}

	return iSum;

}//End of AdditionOfAllEle


////////////////////////////////////////////////////////////
//
//  Name        :LargestElement
//  Input       :PNODE
//  Returns     :int
//  Description :Largest element in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
int LargestElement(PNODE Head )
{
	int iMax = Head->iData;

	while( Head != NULL)
	{

		if( iMax < Head -> iData )
			iMax = Head -> iData;

		Head = Head -> Next;
	}

	return iMax;

}//End of LargestElement


////////////////////////////////////////////////////////////
//
//  Name        :SmallestElement
//  Input       :PNODE
//  Returns     :int
//  Description :Smallest element in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
int SmallestElement(PNODE Head )
{
	int iMin = Head -> iData;

	while( Head != NULL)
	{

		if( iMin > Head -> iData )
			iMin = Head -> iData;

		Head = Head -> Next;
	}

	return iMin;

}//End of SmallestElement