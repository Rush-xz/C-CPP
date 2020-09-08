////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which accept information of 5 students from user and insert that 
//	information into file by using library functions. 
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
	int rollno;
	char name[30];
	char address[30];
	int marks1;
	int marks2;
	int marks3;

};
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	:		WriteToFile
//
//		Input			:		File name 
//
//		Returns			:		void
//
//		Description		:		This function accept information of 5 students and insert that 
//								information into file by using library functions.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WriteToFile( struct Student *ptr )
{
	//create FILE pointer
	FILE *fp=NULL;

	//open 1st file 
	fp=fopen("Studentinfo.txt","wb");
	
	//check whether file is open or not.
	if(fp == NULL)
	{
		printf("\n Problem in reading or writing a file.\n");
		exit(1);
	}

	fwrite(ptr,sizeof(Student),5,fp);

	printf("\n information stored successfully..");

	fclose(fp);
}
void DisplayInfo(struct Student *ptr)
{
	FILE *fp=NULL;

	fp=fopen("StudentInfo.txt","rb");

	if(fp == NULL)
	{
		printf("\n can not open file.");
		exit(2);
	}
	memset(ptr,0,sizeof(Student)*5);

	fread(ptr,sizeof(Student),5,fp);

	for(int i=0;i<5;i++)
	{
		printf("\n Roll number => %d",ptr->rollno);
		printf("\n Name => %s",ptr->name);
		printf("\n Address => %s",ptr->address);
		printf("\n Marks of 1st subjects => %d",ptr->marks1);
		printf("\n Marks of 2nd subjects => %d",ptr->marks2);
		printf("\n Marks of 3rd subjects => %d",ptr->marks3);
		ptr++;
	}
	fclose(fp);
}
	
int main()
{
	//creating array of structor to hold info of 5 students.
	struct Student arr[5];
	int i=0;

	//accept information of 5 students.
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter information of %d student :\n",i+1);	

		printf("\n Enter roll number => ");
		scanf("%d",&arr[i].rollno);
		fflush(stdin);

		printf("\n Enter name => ");
		scanf("%[^\n]",arr[i].name);
		fflush(stdin);

		printf("\n Enter address => ");
		scanf("%[^\n]",arr[i].address);
		fflush(stdin);

		printf("\n Enter marks of first subject => ");
		scanf("%[^\n]",&arr[i].marks1);
		fflush(stdin);

		printf("\n Enter marks of second subject => ");
		scanf("%[^\n]",&arr[i].marks2);
		fflush(stdin);

		printf("\n Enter marks of third subject => ");
		scanf("%[^\n]",&arr[i].marks3);
		fflush(stdin);
	}

	//calling function for writing the information.
	WriteToFile(arr);

	//display information of the students.
	DisplayInfo(arr);

	return 0;
}
