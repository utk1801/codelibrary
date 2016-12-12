//Quicksort

#include<iostream.h>
#include<conio.h>

//Function prototypes
void quicksort(int a[10],int , int);
void display(int a[10],int);

//Main function

void main()
{
	clrscr();
	int a[10];
	int i,j,n;
	cout<<"\nEnter number of elements (max 10) : ";
	cin>>n;
	cout<<"\nEnter elements : ";
	for(i=0;i<n;i++)        //Taking elements from user
		cin>>a[i];
	quicksort(a,0,n-1);	//Sending the array a,0 and n as parameters to the function quicksort
	display(a,n);           //Calling display function
	getch();
}

//Quicksort function

void quicksort(int a[],int left,int right)   //left is the initial position and right is the last position
{
	int i = left,temp,j = right,pivot = a[(left+right) / 2];     //Taking pivot element as the middle element
	while(i<=j)     //loop till i is less than j
	{
		while(a[i]<pivot)    //looping till the left elements are lesser than the pivot element
			i++;
		while(a[j]>pivot)   //looping till the right elements are greater than the pivot element
			j--;
		if(i<=j)       //Swapping if i is less than j
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	};

	if(left<j)      //recursing if left is less than j
		quicksort(a,left,j);
	if(i<right)     //recursing if i is less than right
		quicksort(a,i,right);
}

//Display function

void display(int a[10],int x)
{
	int i;
	cout<<"\n\nSorted Array : ";
	for(i=0;i<x;i++)               //Loop to display the array
	{
		cout<<a[i]<<" ";
	}
}