// Queues using Array
// By Hemant Baid

#include<iostream.h>
#include<conio.h>

int a[10],front=-1,rear=0;

void enqueue();
void dequeue();
void display();

void head()
	{
	cout<<"\n ---------------- \n";
	cout<<"\n	QUEUE	   \n";
	cout<<"\n ---------------- \n";
	}
void menu()
	{
	cout<<"\n 1. Enqueue ";
	cout<<"\n 2. Dequeue ";
	cout<<"\n 3. Display ";
	cout<<"\n 4. Exit    ";
	cout<<"\n Please enter a choice : ";
	}

void main()
	{
	clrscr();
	int choice,flag=1;
	while(flag==1)
	  {
	  head();
	  menu();
	  cin>>choice;
	  switch(choice)
		{
		case 1:
			cout<<"\n ----ENQUEUE---- \n";
			enqueue();
			break;
		case 2:
			cout<<"\n ----DEQUEUE---- \n";
			dequeue();
			break;
		case 3:
			cout<<"\n ----DISPLAY---- \n";
			display();
			break;
		case 4:
			cout<<"\n Press any key to exit...";
			getch();
			flag=2;
			break;
		default:
			cout<<"\n Please check your choice...";
			break;
		}
	  clrscr();
	  }
	cout<<"\n Thank you ! Program by Hemant Baid @ Code Library ";
	getch();
	}

void enqueue()
	{
	if(rear==10)
		{
		cout<<"\n Queue Full ! Press any key to continue... ";
		}
	else
		{
		if(front==-1)
		  {
		  front=0;
		  }
		cout<<"\n Please enter a nos : ";
		cin>>a[rear++];
		cout<<"\n Number Enqueued !! Press any key to continue..";
		}
	getch();
	}

void dequeue()
	{
	if(front==-1)
		{
		cout<<"\n Queue Empty !! Press any key to continue..";
		}
	else
		{
		cout<<"\n The dequeued element is : "<<a[front];
		cout<<"\n Press any key to continue....";
		a[front]=0;
		front++;
		if(front==rear)
			{
			front=-1;
			rear=0;
			}
		}
	getch();
	}

void display()
	{
	int i;
	if(front!=-1)
	  {
	  cout<<"\n The queue elements are : ";
	  for(i=front;i<rear;i++)
		{
		cout<<"|"<<a[i];
		}
	  }
	else
	  {
	  cout<<"\n Empty Queue !";
	  }
	cout<<"\n Press any key to continue...";
	getch();
	}