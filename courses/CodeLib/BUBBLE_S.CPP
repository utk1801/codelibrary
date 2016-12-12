//By : Abhishek Gupta
// Bubble Sort

#include<iostream.h>
#include<conio.h>

//Global variable declaration

int a[10],n,temp;

void bubble();
void head();
void display();

//Main Function

void main()
{
	int i,j;
	clrscr();
	head();
	cout<<"\n\nEnter number of elements (max 10) : ";
	cin>>n;
	cout<<"\n\nEnter elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	clrscr();
	bubble();
	cout<<"\n The array is sorted now ! ";
	cout<<"\n\nPress any key to continue !..";
	getch();
	clrscr();
	getch();
}

void bubble ()
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		cout<<"\n After iteration "<<i<<" : ";
		display();
		cout<<"\n";
	}
}

void display()
{
	int i;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}

void head()
{
	cout<<"\n------------------------\n";
	cout<<"\n       Bubble Sort      \n";
	cout<<"\n------------------------\n";
}

