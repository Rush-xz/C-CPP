#include"MyHeader.h"

int main()
{
	//step 1
	int **p = NULL;
	int iRow = 0 , iCol = 0, iRet = 0 , i = 0 , j = 0;

	printf("\nEnter the number of Rows	:");
	scanf("%d",&iRow);

	printf("\nEnter the number of Columns	:");
	scanf("%d",&iCol);

	//step 2
	p = ( int **)malloc( sizeof(int*) * iRow); //2D

	//step 3
	for( i=0; i<iRow; ++i)
	{
		p[i] = (int *)malloc( iCol * sizeof(int));
	}

	printf("\nEnter the Values	:\n");
	for( i=0; i<iRow; ++i)
	{
		for( j=0; j<iCol; ++j)
		{
			scanf("%d",&p[i][j]);
		}
	}

	printf("\nEntered Values are	:\n");
	for( i=0; i<iRow; ++i)
	{
		for( j=0; j<iCol; ++j)
		{
			printf("%d\t",p[i][j]);
		}

		printf("\n");
	}

	iRet = SumArr( p , iRow , iCol );

	printf("\nSummession of Elements is	:%3d.",iRet);

	//step 3
	for( i=0; i<iRow; ++i)
	{
		free(p[i]);
	}

	//step 4
	free(p);

	return 0;

}

/*	OUTPUT :

Enter the number of Rows        :3

Enter the number of Columns     :3

Enter the Values        :
1
2
3
4
5
6
8
7
9

Entered Values are      :
1       2       3
4       5       6
8       7       9

Summession of Elements is       : 45.

*/