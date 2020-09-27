////////////////////////////////////////////////////////////////
//
//	Design one class which performs all basic operations on Array
//	such as,
//	1) Memory Allocation
//	2) Memory Deallocation
//	3) Copy the contents from one memory into another memory
//	4) Accept the data and stored it into the Array
//	5) Display Contents of Array
//
////////////////////////////////////////////////////////////////
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
			Array( int Value = 6)		//Parameterised Constructor
			{								//Memory content copy
				cout<<"\nInside Parameterised Constructor";

				if( Value < 0)		//Updater
					Value = -Value;

				this -> Size = Value;
				this -> Arr = new int[Size];
			}

			Array( Array &ref )//Copy Constructor:Copy m/r Contents
			{
				cout<<"\nInside Copy Constructor";

				this -> Size = ref.Size;
				this -> Arr = new int[this->Size];	//Deep Copy
				//this -> Arr = ref.Arr;			//Shallow copy

				for( int i=0; i<this->Size; ++i)
				{
					this -> Arr[i] = ref.Arr[i];
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
			
};

class Sorting : public Array
{
	public :
		Sorting( int No = 6):Array(No)
		{}

		void BubbleSort();
		void BubbleSortX();
		void SelectionSort();
		void InsertionSort();
		void QuickSort();
		void Qsort( int , int );
};

///////////////////////////////////////////////////////////////////
//
//  Name        :Accept
//  Input       :void
//  Returns     :void
//  Description :Accepts N elements from user (through constructor)
//  Author      :Rushikesh Godase
//  Date        :15 Sept 2020
//
///////////////////////////////////////////////////////////////////
//void Array :: Accept( const Array *this )
void Array :: Accept()
{

	if( NULL == Arr)
	{
		cout<<"\n Array is Empty.";
		return;
	}

	cout<<"\nPlease Enter the values	:\n";

	for( int i=0; i<this->Size; i++)
	{
		cin>>Arr[i];
	}
}


///////////////////////////////////////////////////////////////////
//
//  Name        :Display
//  Input       :void
//  Returns     :void
//  Description :Displays Array elemets
//  Author      :Rushikesh Godase
//  Date        :15 Sept 2020
//
///////////////////////////////////////////////////////////////////
//void Array :: Display( const Array *this)
void Array :: Display()
{
	if( this->Arr == NULL)
	{
		cout<<"\nArray is Empty";
		return;
	}

	cout<<"\nElements are :";

	for( int i=0; i<this->Size; i++)
	{
		cout<<Arr[i]<<"  ";
	}

	cout<<"\n";
}


///////////////////////////////////////////////////////////////////
//
//  Name        :BubbleSort
//  Input       :void
//  Returns     :void
//  Description :Sorts Array elemets using bubble sort[increasing order].
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//	Best Case and Worst Time Complexity is O(N^2)	
//
///////////////////////////////////////////////////////////////////
void Sorting :: BubbleSort()
{
	cout<<"\nInside Bubble Sort.";

	for(int Pass = 1; Pass<Size; Pass++)
	{
		for( int i=0; i<Size-Pass; i++)
		{
			if( Arr[i] > Arr[i+1])
			{
				int Temp 	 = Arr[i];
					Arr[i] 	 = Arr[i+1];
					Arr[i+1] = Temp;
			}
		}
	}
}


///////////////////////////////////////////////////////////////////
//
//  Name        :BubbleSortX
//  Input       :void
//  Returns     :void
//  Description :Sorts Array elemets using bubble sort[increasing order].
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//	Best Case TC is O(N) & Worst Case TC is O(N^2)	
//
///////////////////////////////////////////////////////////////////
void Sorting :: BubbleSortX()//Optimised Code 
{
	cout<<"\nInside Efficient Bubble Sort.";
	BOOL Sort = FALSE;

	for(int Pass = 1; Pass<Size; Pass++)
	{
		Sort = FALSE;

		for( int i=0; i<Size-Pass; i++)
		{
			if( Arr[i] > Arr[i+1])
			{
				int Temp 	 = Arr[i];
					Arr[i] 	 = Arr[i+1];
					Arr[i+1] = Temp;

				Sort = TRUE;
			}
		}

		if( Sort = FALSE)
		{
			break;
		}
	}
}


///////////////////////////////////////////////////////////////////
//
//  Name        :SelectionSort
//  Input       :void
//  Returns     :void
//  Description :Sorts Array elemets using selection sort[increasing order].
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//	Best Case TC is O(N^2) & Worst Case TC is O(N^2)	
//
///////////////////////////////////////////////////////////////////
void Sorting :: SelectionSort()
{
	int i=0 , j=0 , iMin = 0 , Temp = 0;

	for( i=0; i<Size-1; i++)
	{
		iMin = i;

		for( j=i+1; j<Size; ++j)
		{
			if( Arr[j] < Arr[iMin] )
			{
				iMin = j; 
			}
		}

		if( i != iMin )
			{
				Temp = Arr[i];
				Arr[i] = Arr[iMin];
				Arr[iMin] = Temp;
			}
	}
}


///////////////////////////////////////////////////////////////////
//
//  Name        :InsertionSort
//  Input       :void
//  Returns     :void
//  Description :Sorts Array elemets using insertion sort[increasing order].
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//	Best Case TC is O(N^2) & Worst Case TC is O(N^2)	
//
///////////////////////////////////////////////////////////////////
void Sorting :: InsertionSort()
{

	int i = 0 , j = 0 , key = 0;

	for( i=1; i<Size; ++i)//iterate every element
	{
		key = Arr[i];
		j = i-1;

		//iterate the array to find out position for key
		while( (j>=0) && (Arr[j]>key) )
		{		

			Arr[j+1] = Arr[j];
			j--;

		}

		//store the selected element at desired posirion.
		Arr[j+1] = key;
	}
}


//////////////////////////////////////////////////////////////////
//
//  Name        :QuickSort
//  Input       :void
//  Returns     :void
//  Description :Sorts elements using QuickSort() technique
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//
///////////////////////////////////////////////////////////////////
void Sorting::QuickSort() /* QuickSort()(Sorting const *this) */
{
    if (NULL == this->Arr)
    {
        cout << "Array Is Empty\n";
        return;
    }
    /*  Taking pivot as first element , we can take last or middle also,
    *   slight change in logic */
    Qsort(0, this->Size - 1);

} // end of QuickSort()


//////////////////////////////////////////////////////////////////
//
//  Name        :Qsort
//  Input       :void
//  Returns     :void
//  Description :Sorts elements using Qsort() technique
//  Author      :Rushikesh Godase
//  Date        :19 Sept 2020
//
///////////////////////////////////////////////////////////////////
/* Qsort()(Sorting const *this, int, int) */
void Sorting::Qsort(int iLow, int iHigh)
{
    int iPivot = 0, i = 0, j = 0, iTemp = 0;

    if (iLow < iHigh)
    {
        i = iLow;
        j = iHigh;
        iPivot = this->Arr[iLow];

        while (i < j)
        {

            while (this->Arr[i] <= iPivot && i < iHigh)
            {				//finds largest ele than pivot
                i++;
            }
            while (this->Arr[j] > iPivot)
            {				//finds smallest ele than pivot
                j--;
            }

            if (i < j)
            {
                iTemp = this->Arr[i];
                this->Arr[i] = this->Arr[j];
                this->Arr[j] = iTemp;
            }
        }
        iTemp = this->Arr[iLow];
        this->Arr[iLow] = this->Arr[j];
        this->Arr[j] = iTemp;

        Qsort(iLow, j - 1);
        Qsort(j + 1, iHigh);
    }
} // end of QuickSort()


int main()
{
	cout<<"\nInside main.";

	int iValue = 0;

	/*cout<<"\nEnter the Number of elements  :";
	cin>>iValue;

	Sorting obj1(iValue);
	obj1.Accept();
	obj1.Display();
	obj1.BubbleSort();
	obj1.Display();

	cout<<"\nEnter the Number of elements  :";
	cin>>iValue;

	Sorting obj2(iValue);
	obj2.Accept();
	obj2.Display();
	obj2.SelectionSort();
	obj2.Display();

	cout<<"\nEnter the Number of elements  :";
	cin>>iValue;

	Sorting obj3(iValue);
	obj3.Accept();
	obj3.Display();
	obj3.InsertionSort();
	obj3.Display();*/


	cout<<"\nEnter the Number of elements  :";
	cin>>iValue;

	Sorting obj1(iValue);
	obj1.Accept();
	obj1.Display();
	obj1.QuickSort();
	obj1.Display();

	return 0;
}

/*

Inside main.
Enter the Number of elements  :7

Inside Parameterised Constructor
Please Enter the values :
6
4
1
2
9
3
5

Elements are :6  4  1  2  9  3  5

Inside Bubble Sort.
Elements are :1  2  3  4  5  6  9

Enter the Number of elements  :5

Inside Parameterised Constructor
Please Enter the values :
3
1
7
6
9

Elements are :3  1  7  6  9

Elements are :1  3  6  7  9

Enter the Number of elements  :7

Inside Parameterised Constructor
Please Enter the values :
6
4
3
8
2
1
9

Elements are :6  4  3  8  2  1  9

Elements are :1  2  3  4  6  8  9

Inside Destructor.
Inside Destructor.
Inside Destructor.

*/