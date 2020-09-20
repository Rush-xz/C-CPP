////////////////////////////////////////////////////////////////
//
//	Design one class which performs below basic activities by
//	inheriting the Array class[Previous class] such as,
//	1) Accept a number and search that number in a linear fashion
//		[Array is unsorted].
//	2) Accept a number and search that number by traversing the array
//		from both the direction [Array is unsorted].
//	3) Accept number and search that nuber in the Array using binary
//		search technique [Array should be sorted].
//
////////////////////////////////////////////////////////////////

//Header file
#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0 

typedef int BOOL;


//Class Array
class Array
{
	protected :			//Access Specifier
				int Size;
				int *Arr;

	public :

			Array( int iValue = 6)	//Constructor : Memory Allocation
			{
				cout<<"\nInside Parameterised Constructor.";

				if( iValue < 0) //Updater
				{
					iValue = -iValue;
				} 

				this->Size = iValue;
				this->Arr  = new int[this->Size];
			}

			Array( Array &ref)
			{
				cout<<"\nInside Copy Constructor.";

				this->Size = ref.Size;
				this->Arr  = new int[this->Size];	//Deep Copy
				//this->Arr  = ref.Arr;				//Shallow Copy
				
				for (int i = 0; i < Size; ++i)
				{
					this->Arr[i] = ref.Arr[i];
				}
			}

			~Array()	//Destructor : Memory Deallocation
			{
				cout<<"\nInside Destructor.";
				delete []Arr;
			}

			//Behaviour : Utility Functions
			inline void Accept();
			inline void Display();
};//End of class Array


//Class Search
class Search : public Array
{
	public : 
		Search(int x = 6):Array(x) /*Base Member Intialisation*/
		{}

		BOOL LinearSearch( int );
		BOOL LinearSearchBI( int );
		BOOL BinarySearch( int );

	private : 
		BOOL CheckSorted();	

};//End of class ArraySearch

///////////////////////////////////////////////////////////////////
//
//  Name        :Accept
//  Input       :void
//  Returns     :void
//  Description :Accepts N elements from user (through constructor)
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//
///////////////////////////////////////////////////////////////////
//void Array :: Accept( const Array *this )
void Array :: Accept()
{
	if( NULL == Arr)
	{
		cout<<"\nArray is Empty.";
		return;
	}

	cout<<"\nPlease Enter the Values	:";
	for( int i=0; i<this->Size; ++i)
		cin>>Arr[i];

}

///////////////////////////////////////////////////////////////////
//
//  Name        :Display
//  Input       :void
//  Returns     :void
//  Description :Display N elements
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//
///////////////////////////////////////////////////////////////////
//void Array :: Display( const Array *this )
void Array :: Display()
{
	if( NULL == Arr )
	{
		cout<<"\nArray is Empty.";
		return;
	}

	cout<<"\nEntered Elements are	:";
	for( int i=0; i<this->Size; ++i)
		cout<<Arr[i]<<"\t";

}

///////////////////////////////////////////////////////////////////
//
//  Name        :LinearSearch
//  Input       :int
//  Returns     :BOOL 
//  Description :Search elment from array in linear fashion.
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//
///////////////////////////////////////////////////////////////////
BOOL Search :: LinearSearch( int iValue )
{
	int i = 0;

	for( i=0; i<this->Size; ++i)
	{
		if( Arr[i] == iValue)
		{
			break;
		}
	}

	if( i == Size)
		return FALSE;
	else
		return TRUE;

}


///////////////////////////////////////////////////////////////////
//
//  Name        :LinearSearchBI
//  Input       :int
//  Returns     :BOOL 
//  Description :Search elment from array in linear fashion.
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//
///////////////////////////////////////////////////////////////////
BOOL Search :: LinearSearchBI( int iValue )
{
	int iStart = 0 , iEnd=Size-1;

	while( iStart < iEnd )
	{
		if( (Arr[iStart]==iValue) || (Arr[iEnd]==iValue) )
			break;

		iStart++;
		iEnd--;
	}


	if( iStart<=iEnd)
		return TRUE;
	else
		return FALSE;

}

///////////////////////////////////////////////////////////////////
//
//  Name        :CheckSorted
//  Input       :void
//  Returns     :BOOL 
//  Description :Check elements in array are sorted or not.
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//
///////////////////////////////////////////////////////////////////
BOOL Search :: CheckSorted()
{
	
	int i = 0;

	for( i=0; i < this->Size-1; ++i)
	{
		if( Arr[i] > Arr[i+1])
			break;
	}

	if( i==Size-1 )
		return TRUE;
	else
		return FALSE;

}


///////////////////////////////////////////////////////////////
//
//	Name 		:BinarySearch
//	Input 		:int
//	Output 		:BOOL
//	Description	:Search element from Array using binary fashion.
//	Author		:Rushikesh Godase
//	Date		:18 Sept 2020
//
///////////////////////////////////////////////////////////////
BOOL Search :: BinarySearch( int iValue)
{
	int iStart = 0 , iEnd = Size-1 , Mid = 0;
	BOOL bRet = FALSE;

	bRet = CheckSorted();

	if(bRet == FALSE)
	{
		return (LinearSearch(iValue));
	}
	else
	{
		while( iStart <= iEnd)
		{
			Mid = ( iStart + iEnd)/2;

			if( Arr[Mid]==iValue )	//Traditional  way
			{	//if( Arr[Mid]==iValue || Arr[iStart]==iValue || Arr[iEnd]==iValue )
				break;
			} 

			if( iValue < Arr[Mid] )
				iEnd = Mid -1;
			else if( iValue > Arr[Mid] )
				iStart = Mid + 1;

		}//end of while

		if( Arr[Mid] == iValue )
		{	//if( Arr[Mid]==iValue || Arr[iStart]==iValue || Arr[iEnd]==iValue )
			return TRUE; 
		}
		else
		{
			return FALSE;
		}		

	} //End of else
}



//Driver Function
int main()
{
	int  iValue = 0 ;
	BOOL bRet = FALSE;

	cout<<"\nEnter the number of Elements  :";
	cin>>iValue;

	Search obj1(iValue);
	obj1.Accept();
	obj1.Display();

	cout<<"\nEnter the Value to be Search[LinearSearch]  :";
	cin>>iValue;

	bRet = obj1.LinearSearch( iValue );

	if( bRet == TRUE)
		printf("%d is Present.\n",iValue);
	else
		printf("%d is Absent.\n",iValue);


	cout<<"\nEnter the Value to be Search[LinearSearchBI]  :";
	cin>>iValue;

	bRet = obj1.LinearSearchBI( iValue );

	if( bRet == TRUE)
		printf("%d is Present.\n",iValue);
	else
		printf("%d is Absent.\n",iValue);

	cout<<"\nEnter the Value to be Search[BinarySearch] :";
	cin>>iValue;

	bRet = obj1.BinarySearch( iValue );

	if( bRet == TRUE)
		printf("%d is Present.\n",iValue);
	else
		printf("%d is Absent.\n",iValue);



	return 0;
}	

/* OUTPUT :

Enter the number of Elements  :7

Inside Parameterised Constructor.
Please Enter the Values :16
46
89
132
899
901
952

Entered Elements are    :16     46      89      132     899     901     952
Enter the Value to be Search[LinearSearch]  :10
10 is Absent.

Enter the Value to be Search[LinearSearchBI]  :89
89 is Present.

Enter the Value to be Search[BinarySearch] :901
901 is Present.

Inside Destructor.

*/