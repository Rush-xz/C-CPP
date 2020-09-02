///////////////////////////////////////////////////////////////////////
//
//		Implementation Singly Linear Linked List ie.[SLLL].
//
///////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<malloc.h>


//Structure of node of linked list
typedef struct Node
{
	int iData;
	struct Node *Next;
}NODE , *PNODE , **PPNODE;

//Global Declaration
void InsertFirst( PPNODE , int );
void InsertLast( PPNODE , int );
void DisplayEle(PNODE);
void Deallocate(PPNODE);
int  CountEle(PNODE);
int  CountFreq(PNODE , int);
int  FirstOccurance(PNODE , int);
int  LastOccurance(PNODE , int);
int  AdditionOfAllEle(PNODE);
int  LargestElement(PNODE);
int  SmallestElement(PNODE);


//Driver Function
int main()
{
	printf("\n--------------Implementation of Singly Linear Linked List---------------\n\n");

	PNODE Head = NULL;

	int iSize = 0 , iNo = 0 , i = 0 , iRet = 0;

	printf("Enter Number of Elements 	: ");
	scanf("%d",&iSize);

	/*Insert elements Always At First Position*/
	printf("\nEnter the Elements(Insert First) 	:\n");
	for(i=0; i<iSize; i++)
	{
		scanf("%d",&iNo);
		InsertFirst(&Head , iNo);
	}

	/*Display All Elements From SLLL*/
	printf("\nDisplay Elements 	:\n");
	DisplayEle(Head);

	/*Insert Element At Last Position*/
	printf("\n\nEnter the Element(Insert Last) 	:");
	scanf("%d",&iNo);
	InsertLast(&Head , iNo);

	/*Display All Elements From SLLL*/
	printf("\nDisplay Elements 	:\n");
	DisplayEle(Head);

	/*Count All Elements From SLLL*/
	iRet = CountEle(Head);
	printf("\n\nTotal Number of Elements(Count) 	:%3d",iRet);


	/*Count frequency of Element From SLLL*/
	printf("\n\nEnter the element(For Count frequency of Element) 	:");
	scanf("%d",&iNo);
	iRet = CountFreq(Head , iNo);
	if(iRet != -1)
		printf("\n\nFrequency of Element %d is	:%3d",iNo,iRet);


	/*Search First Occurance Element From SLLL*/	
	printf("\n\nEnter the element(For First Occurance) 	:");
	scanf("%d",&iNo);
	iRet = FirstOccurance(Head , iNo);
	if(iRet == 0)
		printf("\n Element not present in Linked List.\n");
	else if( iRet != -1)
		printf("\nFirst Occurance of %d is at : %d",iNo,iRet);

	/*Search Last Occurance of Element From SLLL*/
	printf("\n\nEnter the element(For Last Occurance) 	:");
	scanf("%d",&iNo);
	iRet = LastOccurance(Head , iNo);
	if(iRet == 0)
		printf("\n Element not present in Linked List.\n");
	else if( iRet != -1)
		printf("\nLast Occurance of %d is at : %d",iNo,iRet);


	/*Display Addition All Elements From SLLL*/
	iRet = AdditionOfAllEle(Head);
	if(iRet != -1)
		printf("\n\nAddition Of All Elements  	:%d",iRet);

	/*Display Largest Element From SLLL*/
	iRet = LargestElement(Head);
	if( iRet != -1)
		printf("\n\nLargest Element from Linked List is  :%d",iRet);

	/*Display Smallest Element From SLLL*/
	iRet = SmallestElement(Head);
	if( iRet != -1)
		printf("\n\nSmallest Element from Linked List is  :%d",iRet);

	/*Deallocate All Elements from linked list*/
	Deallocate(&Head);

}


////////////////////////////////////////////////////////////
//
//  Name        :InsertFirst
//  Input       :PPNODE , int
//  Returns     :void
//  Description :Insert elements in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void InsertFirst( PPNODE First , int iNo)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	if( NULL == newn )
	{
		return;
	}

	newn -> iData = iNo;
	newn -> Next = NULL;

	if( *First == NULL)
	{
		*First = newn;
	}
	else
	{
		newn -> Next = *First;
		*First = newn;
	}
}//End of InsertFirst()


////////////////////////////////////////////////////////////
//
//  Name        :InsertLast
//  Input       :PPNODE , int
//  Returns     :void
//  Description :Insert elements At Last Position in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void InsertLast( PPNODE First , int iNo)
{
	PNODE newn = NULL;
	PNODE Temp = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	if( NULL == newn )
	{
		return;
	}

	newn -> iData = iNo;
	newn -> Next = NULL;

	if( *First == NULL)
	{
		*First = newn;
	}
	else
	{
		Temp = *First;
		while( Temp -> Next != NULL)
		{
			Temp = Temp -> Next;
		}

		Temp -> Next = newn;
	}
}//End of InsertLast()



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
void DisplayEle( PNODE First )
{
	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return;
	}

	while( First != NULL)
	{
		printf("| %d | -> ",First->iData);
		First = First -> Next;
	}

	printf("NULL\n");
}//End of DisplayEle



////////////////////////////////////////////////////////////
//
//  Name        :Deallocate
//  Input       :PPNODE
//  Returns     :void
//  Description :Deallocates All Nodes from linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void Deallocate( PPNODE First )
{

	if( NULL == *First)
	{
		printf("Linked List is Empty.\n");
		return;
	}

	PNODE Temp = NULL;

	while( *First != NULL)
	{
		Temp = *First;
		*First = Temp->Next;
		free(Temp);
	}

}



////////////////////////////////////////////////////////////
//
//  Name        :CountEle
//  Input       :PNODE
//  Returns     :int
//  Description :Count all elements in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
int CountEle( PNODE First )
{
	int iCnt = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return -1;
	}

	while( First != NULL)
	{
		++iCnt;

		First = First -> Next;
	}

	return iCnt;

}//End of CountEle

////////////////////////////////////////////////////////////
//
//  Name        :CountFreq
//  Input       :PNODE , int
//  Returns     :int
//  Description :Counts Frequency of element in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
int CountFreq( PNODE First , int iNo )
{
	int iFreq = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return -1;
	}

	while( First != NULL)
	{

		if( First->iData == iNo )
			++iFreq;

		First = First -> Next;
	}

	return iFreq;

}//End of CountFreq



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
int FirstOccurance(PNODE First , int iNo)
{
	int iPos = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return -1;
	}

	while( First != NULL)
	{
		++iPos;
		if( First->iData == iNo)
		{
			break;
		}

		First = First -> Next;
	}

	if( First == NULL)
	{
		return 0;			//Element not present in linked list
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
int LastOccurance(PNODE First , int iNo)
{
	int iCnt = 0 , iPos =-1;

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return -1;
	}

	while( First != NULL)
	{
		++iCnt;
		if( First->iData == iNo)
		{
			iPos = iCnt;
		}

		First = First -> Next;
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
int AdditionOfAllEle(PNODE First )
{
	int iSum = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return -1;
	}

	while( First != NULL)
	{
		iSum = iSum + First -> iData;

		First = First -> Next;
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
int LargestElement(PNODE First )
{
	int iMax = First->iData;

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return -1;
	}

	while( First != NULL)
	{

		if( iMax < First -> iData )
			iMax = First -> iData;

		First = First -> Next;
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
int SmallestElement(PNODE First )
{
	int iMin = First -> iData;


	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return -1;
	}

	while( First != NULL)
	{

		if( iMin > First -> iData )
			iMin = First -> iData;

		First = First -> Next;
	}

	return iMin;

}//End of SmallestElement



/*	OUTPUT	:

--------------Implementation of Singly Linear Linked List---------------

Enter Number of Elements        : 6

Enter the Elements(Insert First)        :
16
49
23
49
22
78

Display Elements        :
| 78 | -> | 22 | -> | 49 | -> | 23 | -> | 49 | -> | 16 | -> NULL


Enter the Element(Insert Last)  :12

Display Elements        :
| 78 | -> | 22 | -> | 49 | -> | 23 | -> | 49 | -> | 16 | -> | 12 | -> NULL


Total Number of Elements(Count)         :  7

Enter the element(For Count frequency of Element)       :49


Frequency of Element 49 is      :  2

Enter the element(For First Occurance)  :23

First Occurance of 23 is at : 4

Enter the element(For Last Occurance)   :49

Last Occurance of 49 is at : 5

Addition Of All Elements        :249

Largest Element from Linked List is  :78

Smallest Element from Linked List is  :12


*/