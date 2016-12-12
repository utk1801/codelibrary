// Sentinal Search

#include<iostream.h>
#include<conio.h>

//Global variable declaration

int a[10],key,i,n;

//function prototypes

void head();
void display();

//Main Function

void main()
{
	clrscr();
	head();
	char ch;
	cout<<"Enter number of elements (max 10 ) : ";
	cin>>n;
	cout<<"\n\nEnter elements : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	clrscr();
	do
	{
		clrscr();
		head();
		cout<<"\n\nEnter element to be searched for : ";
		cin>>key;            //Taking the element to be searched in variable key
		a[n]=key;       //Assigning the last element of the array as key
		i=0;
		while(a[i]!=key)  //Looping till the array contains key and incrementing i
			i++;
		if(i == n)  //if i = n then the element is not present
		{
			cout<<"\n\nElement not present ";
			cout<<"\n\nDo you want to try again (y/n) : ";
			cin>>ch;
		}
		else        //Element is present
		{
			display();
			cout<<"\n\nElement present at position  : "<<i+1;
			cout<<"\n\nDo you want to try again (y/n) : ";
			cin>>ch;
		}
		if(ch != 'y' && ch !='n')
		{
			cout<<"\n\nWrong Option " ;
			cout<<"Please enter correct option ( y / n ) : ";
			cin>>ch;
		}
	}while(ch=='y');    //Looping till ch = y
}

void head()
{
	cout<<"----------------------------\n\n";
	cout<<"        Sentinal Search     \n\n";
	cout<<"----------------------------\n\n";
}

//Display function

void display()
{
	int i;
	cout<<"\n\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";     //Displaying the elements of array
	}
}