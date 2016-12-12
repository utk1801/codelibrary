//By : Abhishek Gupta
// Stack Implementation Using Linked List

#include<iostream.h>
#include<conio.h>

//Functions to be used during the program for various operations

void head();
void push();
void pop();
void display();

//Structure of node with an integer variable and a pointer

struct node
{
	int info;
	node*next;
}*top,*temp;   //Global variables : top = top of the stack

//Main Function

void main()
{
	clrscr();
	top = NULL;  //Setting NULL values initially. Note:NULL to be written in caps
	int ch = 0 , flag = 0; //Initializing flag variable to be true
	while(flag==0)  //Loop till flag is true
	{
		head();
		cout<<"Menu \n 1.Push \n 2.Pop \n 3.Display \n 4.Exit";   //Menu
		cout<<"\nEnter Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				flag=1;
				break;
			default :
				cout<<"\n\nWrong Option! Please enter correct option again !";
		}
		cout<<"\n\n\nPress any key to continue !. .";
		getch();
		clrscr();
	}
	getch();
}

void head()
{
	cout<<"------------------------------";
	cout<<"\n  Stacks - Linked Lists";
	cout<<"\n------------------------------\n\n";
}

//Push Function


void push()
{
	temp = new node;    //Assigning memory for the node temp
	cout<<"\n\nEnter data to be pushed : ";
	cin>>temp->info;    //Assigning the info part of the node with value entered by user
	if(top==NULL)       //Checking if the Stack is empty
	{
		temp->next=top;
		top = temp;
		cout<<"\n\nData has been pushed ";
	}
	else
	{
		temp->next = top;
		top = temp;
		cout<<"\n\nData has been pushed ";
	}
}

//Pop Function

void pop()
{
	temp = new node;
	if(head==NULL)         //Checking for empty Stack
		cout<<"\n\nStack Underflow !";
	else
	{
		temp = top;
		top = top -> next;
		cout<<"\n\nPopped out element : "<<temp->info;
		delete temp;    //Emptying the memory used
	}
}

//Display Function

void display()
{
	if(top == NULL)    //Checking for empty Stack
	{
		cout<<"\n\nStack is Empty !";
	}
	else
	{
		cout<<"\n\nStack is ..\n\n";
		temp = new node;
		temp = top;
		cout<<"Top - >"<<temp->info;    //Displaying the top element
		cout<<endl;
		temp = temp -> next;
		while(temp!=NULL)       //Looping till temp reaches NULL
		{
			cout<<"       "<<temp->info;  //Displaying Temp
			temp = temp->next;
			cout<<endl;
		}
	}
}