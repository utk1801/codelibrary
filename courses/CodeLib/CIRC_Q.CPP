//By : Abhishek Gupta
// Circular Queue

#include<iostream.h>
#include<conio.h>

//Various Functions to be used during the program

void insert();
void head();
void del();
void display();

//Global variable declaration

int i,flag=0,ch;
int a[5]={-1,-1,-1,-1,-1};
int rear = -1 , front = -1;

//Main Function

void main()
{
	clrscr();
	do
	{
		clrscr();
		head();
		cout<<"\n\nMenu\n\n1.Insert\n2.Delete\n3.Display\n4.Exit ";
		cout<<"\n\nEnter choice : ";
		cin>>ch;
		switch(ch)  //Checking for option entered by user
		{
			case 1:
				insert();
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				flag = 1;
				break;
			default:
				cout<<"\n\nWrong Option Entered ! .. ";
				break;
		}
		cout<<"\n\nPress any key to continue ! ...";
		getch();
	}while(ch!=4);
	clrscr();
	getch();
}

//Insert Function

void insert()
{
	int info;
	if(rear == -1 && front == -1)   //Checking if any element is present in array
	{
		rear ++;
		front ++;
		cout<<"\nEnter element : ";
		cin>>info;
		a[rear] = info;
		return;
	}
	rear ++;
	if(rear == 5)   //Checking for limit of array
	{
		rear = 0;
		if(rear == front)     //Checking if array is full
		{
			cout<<"\n\nQueue Overflow ! ";
			rear = 4;
			return;
		}
	}
	if(rear == front)    //Checking if queue is full
	{
		cout<<"\n\nQueue Overflow ! ";
		rear--;
	}
	else           //Queue is not full
	{
		cout<<"\nEnter Element : ";
		cin>>info;
		a[rear] = info;
	}
}

//Delete function

void del()
{
	int info;
	if(front == -1 && rear == -1)   //Checking if any element present in array
	{
		cout<<"\nQueue Underflow ";
		return;
	}
	info = a[front];
	if(front == rear)    //Checking if only 1 element present in array
	{
		front = -1;
		rear = -1;
		cout<<"\nElement deleted : "<<info;
		return;
	}
	else
	{
		front++;
		if(front == 5)
			front = 0;
		cout<<"\nElement Deleted : "<<info;
	}
}

//Display Function

void display()
{
	if(front == -1 && rear == -1)    //Checking if any element present in array
		cout<<"\nNo elements in Queue ";
	else if(front == rear )  //Checking for only 1 element in array
		cout<<endl<<a[front]<<" ";
	else if(front > rear )
	{
		cout<<"\n\n";
		for(i=front;i<5;i++)
		{
			cout<<"\t"<<a[i]<<endl;
		}
		for(i=0;i<=rear;i++)
		{
			cout<<"\t"<<a[i]<<endl;
		}
	}
	else
	{
		cout<<"\n\n";
		for(i=front;i<=rear;i++)
		{
			cout<<"\t"<<a[i]<<endl;
		}
	}
}

void head()
{
	cout<<"\n-------------------------\n";
	cout<<"\n      Circular Queue     \n";
	cout<<"\n-------------------------\n";
}

