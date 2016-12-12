//By : Abhishek Gupta
//Queues Using Linked List

#include<iostream.h>
#include<conio.h>

//Structure of a node with an integer variable and a pointer

struct node
{
	int info;
	node*next;
}*rear,*front,*temp;   //Global Variables .

//Functions to be used during the various operations

void head();
void enqueue();
void dequeue();
void display();

// Main Function

void main()
{
	rear = NULL;      //Initializing the rear and front as NULL
	front = NULL;
	int ch,flag=0;    //Initializing flag variable as true
	while(flag==0)   //Loop till flag is set as true
	{
		clrscr();
		head();
		cout<<"\n\nMenu \n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit";
		cout<<"\n\nEnter Option :";
		cin>>ch;
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				flag = 1;
				break;
			default:
				cout<<"\n\nWrong Option ! Please enter correct option again !. .";
		}
		cout<<"\n\nPress any key to continue ... !";
		getch();
		clrscr();
	}
	getch();
}

void head()
{
	cout<<"------------------------------\n\n";
	cout<<"   Queues Using Linked List   \n\n";
	cout<<"------------------------------\n\n";
}

//Enqueue Function

void enqueue()
{
	temp = new node; //Allocating memory for temp
	cout<<"\n\nEnter data to be entered : ";
	cin>>temp->info;   //Assigning the info part of node temp
	if(front == NULL && rear == NULL)    //Checking if Queue is empty
	{
		temp -> next = front;
		front = temp;
		rear = temp;
		front->next=NULL;
	}
	else          //Adding to the rear part of queue
	{
		rear->next=temp;
		rear=temp;
		rear->next=NULL;

	}
	cout<<"\n\nData has be enqueued ";
}

//Dequeue Function

void dequeue()
{
	if(front == NULL)  //Checking if Queue Empty
	{
		cout<<"\n\nQueue Underflow ! ";
	}
	else if(front == rear)  //Checking if only 1 element is present in Queue
	{
		cout<<"\n\nData being dequeued : "<<front -> info;
		front = rear = NULL;
	}
	else      //If more than 1 element is present in Queue
	{
		temp = new node;
		temp = front;
		front = front -> next;
		cout<<"\n\nData being dequeued : "<<temp -> info;
		delete temp;    //Emptying memory used
	}
}

//Display Function

void display()
{
	if(front == NULL)     //Checking if Queue is empty
	{
		cout<<"\n\nQueue Empty ";
	}
	else if(front == rear)    //Checking if only 1 element present in queue
	{
		cout<<"\n\nFront ->  "<< front->info<<"  <- Rear";
	}
	else
	{
		temp = new node;
		temp = front ;
		cout<<"\n\nFront -> "<<temp->info<<endl;
		temp = temp -> next;
		while(temp != rear)    //Looping and displaying elements till temp reaches rear
		{
			cout<<"         "<<temp -> info;
			temp = temp -> next;
			cout<<endl;
		}
		cout<<"Rear  -> "<<temp -> info;   // Displaying the rear element
	}
}