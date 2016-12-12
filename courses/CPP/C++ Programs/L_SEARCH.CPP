// Linear Search
// By Hemant Baid

#include<iostream.h>
#include<conio.h>

int a[10],element;

void head()
	{
	cout<<"\n --------------------- \n";
	cout<<"\n     Linear Search     \n";
	cout<<"\n --------------------- \n";
	}
void assign();
void lsearch();
void display();

void main()
	{
	clrscr();
	head();
	assign();
	clrscr();
	head();
	cout<<"\n Enter the elemet you want to search : ";
	cin>>element;
	clrscr();
	head();
	lsearch();
	clrscr();
	cout<<"\n Program implemented by Hemant Baid @ Code Library ";
	getch();
	}

void assign()
	{
	int i;
	cout<<"\n Please enter an array of 10 : ";
	for(i=0;i<10;i++)
		{
		cout<<"\n Element "<<(i+1)<<": ";
		cin>>a[i];
		}
	}

void lsearch()
	{
	int i,count=0;
	for(i=0;i<10;i++)
		{
		if(a[i]==element)
			{
			cout<<"\n ----------------------------------------------------- ";
			cout<<"\n Element found after "<<i<<" itertions !";
			cout<<" The nos is at postion "<<(i+1);
			cout<<"\n ----------------------------------------------------- ";
			count++;
			}
		else
			{
			cout<<"\n Element not found after "<<i<<" iterations";
			}
		}
	cout<<"\n The nos occurs "<<count<<" times in the array.";
	getch();
	}
