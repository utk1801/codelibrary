//By : Abhishek Gupta
//Binary Search

//Note : In binary search you should enter the values in ascending order only.
//	 If you want a random set of values , then please add a sorting function.


#include<iostream.h>
#include<conio.h>

//Functions to be used during various operations
//Function prototypes

void binary();
void head();
void display();

//Global variables

int n,num,flag = 1,i;
int a[10];
char ch = 'y';

//Main Function

void main()
{
	clrscr();
	head();
	cout<<"\n\nEnter number of numbers ( max 10 ) : ";
	cin>>n;
	cout<<"\n\nEnter the elements : " ;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	clrscr();
	while(ch=='y')   //Loop till ch = y
	{
		clrscr();
		head();
		cout<<"\n\nEnter element to be searched : ";
		cin>>num;    //Number to be searched is stored globally in variable num
		binary();
		if(flag == 1)
		{
			cout<<"\n\nElement not found !\n\n Do you want to try again (y/n) : ";
			cin>>ch;
		}
		else
		{
			cout<<"\n\nDo you want to search again (y/n) : ";
			cin>>ch;
			flag = 1;
		}
	}
	clrscr();
	getch();
}

//Binary Search Function

void binary()
{
	int mid = n/2 , first = 0 , last = n ;    //Assigning first , mid , last
	while(first<=last)		//Looping till first less than last
	{
		if(a[mid] == num)    //Checking for search element
		{
			display();
			cout<<"\n\nElement found at position : "<< mid+1 ;
			flag = 0;
			break;
		}
		else if(num > a[mid])	//if search element > min element
		{
			first = mid + 1 ;   //assigning first as next position of mid
			mid = (first + last) / 2;   // re-assigning mid
		}
		else
		{
			last = mid - 1;   //assigning last as previous position of mid
			mid = (first + last) / 2; // re-assigning mid
		}
	}
}

//Head Function

void head()
{
	cout<<"----------------------------\n\n";
	cout<<"        Binary Search       \n\n";
	cout<<"----------------------------\n\n";
}

//Display Function

void display()
{
	cout<<"\n\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}