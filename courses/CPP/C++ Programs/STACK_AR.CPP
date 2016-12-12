// Stack Implementation using Arrays
// By : Hemant Baid

#include<iostream.h>
#include<conio.h>

// Global Variables
int a[10],top=-1;

void head()
	{
	cout<<"\n ---------------- \n";
	cout<<"\n      STACKS 	   \n";
	cout<<"\n ---------------- \n";
	}
void menu()
	{
	cout<<"\n 1. PUSH    ";
	cout<<"\n 2. POP     ";
	cout<<"\n 3. DISPLAY ";
	cout<<"\n 4. EXIT    ";
	cout<<"\n Please enter your Choice : ";
	}



// Functions to be used to perform the PUSH and POP Opreations

void push();
void pop();
void display();

// Main Function

void main()
	{
	clrscr();

	int choice; // Used in switching between different cases
	int flag=1; // The flag variable is set as TRUE

	while(flag==1) // Meaning loop until the flag variable is set as TRUE
	  {
	  clrscr();
	  head();
	  menu();
	  cin>>choice;
	  switch(choice)
		{
		case 1:
			cout<<"\n -----PUSH----- \n";
			push();
			break;
		case 2:
			cout<<"\n -----POP------ \n";
			pop();
			break;
		case 3:
			cout<<"\n ---DISPLAY---- \n";
			display();
			break;
		case 4:
			cout<<"\n Displaying final Stack contents : "<<endl;
			display();

			flag=0;
			// Setting flag to 0 which will falsify
			// the loop condtion hence exiting the loop.

			break;
		default:
			cout<<"\n INCORRECT Input... Press any key to continue.. \n";
			getch();
			break;
		}
	  }
	clrscr();
	cout<<"\n Thank You. Program compiled by HEMANT BAID @ CODE LIBRARY ";
	getch();
	}


// PUSH FUNCTION

void push()
	{
	if(top==9)
	  {
	  cout<<"\n OVERFLOW !! THE STACK IS FULL. ";
	  }
	else
	  {
	  cout<<"\n Please enter an integer value : ";
	  cin>>a[++top];
	  cout<<"\n Stack contents updated ! Press any key to continue..";
	  getch();
	  }
	}

// POP FUNCTION

void pop()
	{
	if(top==-1)
	  {
	  cout<<"\n STACK EMPTY !! PLEASE PUSH SOME ELEMENTS FIRST ";
	  }
	else
	  {
	  cout<<"\n Value popped !! Content popped out is : "<<a[top];
	  a[top]=0;
	  top--;
	  cout<<"\n Stack contents updated ! Press any key to continue..";
	  getch();
	  }
	}

// Displaying the set

void display()
	{
	int i;
	if(top==-1)
	  {
	  cout<<"\n STACK EMPTY !! PLEASE PUSH SOME ELEMENTS ";
	  }
	else
	  {
	  for(i=top;i>=0;i--)
		{
		cout<<"|"<<a[i]<<"|"<<endl;
		cout<<"---"<<endl;
		}
	  cout<<"\n Stack Displayed. Press any key to continue...";
	  getch();
	  }
	}
