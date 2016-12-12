//By : Abhishek Gupta
//Insertion Sort

#include<iostream.h>
#include<conio.h>

//Global Variable Declaration

int n,a[10];

//Functions used during operations

void display();
void insertion();

//Main Function

void main()
{
	clrscr();
	int i;
	cout<<"\nEnter number of elements (max 10) : ";
	cin>>n;
	cout<<"\nEnter the elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	clrscr();
	cout<<"\nArray is : ";
	display();
	insertion();
	cout<<"\n\nSorted Array is : ";
	display();
	getch();
}

//Insertion Sort Function

void insertion()
{
	int i,j,x,k;
	cout<<endl;
	for(i=1;i<n;i++)
	{
	       x = a[i];   //assigning x with value of i'th position in array a
	       j = i-1;
	       while(a[j]>x && j>=0)     //Swapping when x<a[j]
	       {
			a[j+1] = a[j];
			j--;
	       }
	       cout<<"\n\nAfter Iteration "<<i<<" : ";
	       a[j+1] = x;
	       display();
	}
}

//Display Function

void display()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}