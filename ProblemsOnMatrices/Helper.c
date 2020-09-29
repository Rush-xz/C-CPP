#include"MyHeader.h"

int SumArr( int **Arr , int iRow , int iCol)
{
	int i = 0 , j = 0 , iSum = 0;

	for( i=0; i<iRow; ++i)
	{
		for( j=0; j<iCol; ++j)
		{
			iSum = iSum + Arr[i][j];
		}
	}

	return iSum;
}