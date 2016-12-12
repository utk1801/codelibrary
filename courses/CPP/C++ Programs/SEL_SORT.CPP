// Selection Sort in Ascending Order
// Hemant Baid

#include<iostream.h>
#include<conio.h>

int a[100],length;

void assign();
void SSort();

void head()
	{
	cout<<"\n ------------------- \n";
	cout<<"\n   SELECTION SORT    \n";
	cout<<"\n ------------------- \n";
	}

void main()
	{
	clrscr();
	head();
	assign();
	SSort();
	clrscr();
	cout<<"\n Thank You. Program compiled by Hemant Baid @ Code Library";
	getch();
	}

void assign()
	{
	int i;
	cout<<"\n Please enter the length of the arrya [Max 100] :";
	cin>>length;
	cout<<"\n Please enter the unsorted array of "<<length<<" integers : ";
	for(i=0;i<length;i++)
		{
		cout<<"\n Element "<<(i+1)<<" : ";
		cin>>a[i];
		}
	}

void SSort()
	{
	clrscr();
	head();
	int i,j,temp;
	cout<<"\n The unsorted array was : ";
	for(i=0;i<length;i++)
		{
		cout<<" "<<a[i]<<" ";
		}
	for(i=0;i<length-1;i++)
		{
		for(j=i;j<length;j++)
			{
			if(a[i]>a[j])
				{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				}
			}
		}
	cout<<"\n The sorted array is :  ";
	for(i=0;i<length;i++)
		{
		cout<<" "<<a[i]<<" ";
		}
	cout<<"\n Press any key to continue....";
	getch();
	}
