// MERGE SORT
// IMPLEMENTED BY HEMANT BAID

#include<iostream.h>
#include<conio.h>
void merge(int a[],int first, int last);
void mergesort(int a[],int first, int mid, int last);
int input(int a[],int length)
	{
	int i;
	cout<<"\n Please enter the length of array [max 50] : ";
	cin>>length;
	cout<<"\n Please enter an array of 10 : ";
	for(i=0;i<length;i++)
		{
		cin>>a[i];
		}
	return length;
	}
void head()
	{
	cout<<"\n ------------------------ \n";
	cout<<"\n	MERGE SORT 	   \n";
	cout<<"\n ------------------------ \n";
	}

void main()
	{
	int i,a[50],length;
	clrscr();
	head();
	length=input(a,length);
	clrscr();
	head();
	cout<<"\n The unsorted array is : ";
	for(i=0;i<length;i++)
		{
		cout<<" "<<a[i]<<" ";
		}
	merge(a,0,length-1);
	cout<<"\n The sorted array is : ";
	for(i=0;i<length;i++)
		{
		cout<<" "<<a[i]<<" ";
		}
	getch();
	cout<<"\n Press any key to continue...";
	clrscr();
	cout<<"\n Thank You! Program Implemented by Hemant Baid @ Code Library";
	getch();
	}

void merge(int a[],int first,int last)
	{
	if(first<last)
		{
		int mid=(first+last)/2;
		merge(a,first,mid);
		merge(a,mid+1,last);
		mergesort(a,first,mid,last);
		}
	}

void mergesort(int a[],int first,int mid,int last)
	{
	int i,j,k,c[50];
	i=first;
	k=first;
	j=mid+1;
	while(i<=mid && j<=last)
		{
		if(a[i]<a[j])
			{
			c[k++]=a[i++];
			}
		else
			{
			c[k++]=a[j++];
			}
		}
	while(i<=mid)
		{
		c[k++]=a[i++];
		}
	while(j<=last)
		{
		c[k++]=a[j++];
		}
	for(i=first;i<=last;i++)
		{
		a[i]=c[i];
		}
	}



