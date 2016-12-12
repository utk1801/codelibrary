#include<iostream.h>
#include<conio.h>
struct node
	{
	int data;
	node *link;
	}*temp,*start;

void insert_end();
void insert_beg();
void insert_mid();
void modify();
void delete_pos();
void display_one();
void display_all();
void find_element();

int length=0;

void head()
	{
	cout<<"\n ------------------ \n";
	cout<<"\n     LINKED LIST    \n";
	cout<<"\n ------------------ \n";
	}
void menu()
	{
	cout<<"\n 1. Insert in the beginning     ";
	cout<<"\n 2. Insert in the middle        ";
	cout<<"\n 3. Insert in the end           ";
	cout<<"\n 4. Delete an element           ";
	cout<<"\n 5. Print a particular element  ";
	cout<<"\n 6. Print the complete link list";
	cout<<"\n 7. Modify an element in list   ";
	cout<<"\n 8. Exit			 ";
	cout<<"\n Please enter the choice :      ";
	}



void main()
	{
	clrscr();
	int i,j,choice;
	int flag=1;
	while(flag==1)
		{
		head();
		menu();
		cin>>choice;
		switch(choice)
			{
			case 1:
				insert_beg();
				break;
			case 2:
				insert_mid();
				break;
			case 3:
				insert_end();
				break;
			case 4:
				delete_pos();
				break;
			case 5:
				display_one();
				break;
			case 6:
				display_all();
				break;
			case 7:
				modify();
				break;
			case 8:
				cout<<"\n Exiting the program...";
				flag=8;
				break;
			default:
				cout<<"\n Invalid Input ! Press any key to continue..";
				getch();
				break;
			}
		clrscr();
		}
	cout<<"\n Thank you. Program compiled my Hemant Baid @ Code Library";
	}

void insert_beg()
	{
	length++;
	cout<<"\n ------- Insert - Beginning ------- \n";
	temp=NULL;
	if(length==0)
		{
		start=NULL;
		}
	if(start==NULL)
		{
		start = new node;
		cout<<"\n Element that is to be entered is : ";
		cin>>start->data;
		start->link=NULL;
		cout<<"\n Data Enetered !";
		}
	else
		{
		temp = start;
		start = NULL;
		start = new node;
		cout<<"\n Element that is to be entered is : ";
		cin>>start->data;
		start->link=temp;
		}
	}

void insert_mid()
	{
	if(length==0)
		{
		cout<<"\n No elements in the link list !! ";
		return;
		}
	else
		{
		int pos,count=1;
		cout<<"\n Please enter the position where you want to insert the element : ";
		cin>>pos;
		if(pos>length)
			{
			cout<<"\n Invalid Psition ! Please re-enter the position !";
			insert_mid();
			}
		else
			{
			struct node *ptr;
			for(ptr=start;ptr!=NULL;ptr=ptr->link)
				{
				count++;
				if(count==pos)
					{
					break;
					}
				}
			temp=new node;
			cout<<"\n Please enter element at position "<<pos<<" : ";
			cin>>temp->data;
			temp->link=ptr->link;
			ptr->link=temp;
			cout<<"\n Data Modified !";
			length++;
			}
		}
	cout<<" Press any key to continue...";
	getch();

	}

void insert_end()
	{
	struct node *ptr;
	temp=NULL;
	if(length==0)
		{
		cout<<"\n The Link list has no head ! ";
		}
	else
		{
		for(ptr=start;ptr->link!=NULL;ptr=ptr->link);
		temp=new node;
		cout<<"\n Element to be entered is : ";
		cin>>temp->data;
		temp->link=NULL;
		ptr->link=temp;
		cout<<"\n Data Entered in the end !";
		length++;
		}
	cout<<"\n Press any key to continue...";
	getch();
	}

void delete_pos()
	{
	if(length==0)
		{
		cout<<"\n Cannot delete anything...  No data in list !";
		}
	else
		{
		int pos;
		cout<<"\n Please enter node position that has to be deleted :";
		cin>>pos;
		if(pos>length)
			{
			cout<<"\n Invalid Position ! Please enter the position again..";
			delete_pos();
			}
		else if(pos==1)
			{
			temp=start;
			start=start->link;
			delete temp;
			cout<<"\n Data Deleted....";
			}

			else
			   {
			   int count=1;
			   struct node *ptr;
			   for(ptr=start;ptr!=NULL;ptr=ptr->link)
				{
				count++;
				if(count==pos)
					{
					break;
					}
				}
			   temp=ptr->link;
			   ptr->link=temp->link;
			   cout<<"\n Node Removed from Link List !";
			   delete temp;
			   length--;
			  }
		}
	cout<<"\n Press any key to continue...";
	getch();
	}

void modify()
	{
	if(length==0)
		{
		cout<<"\n Cannot modify anything...  No data in list !";
		}
	else
		{
		int pos;
		cout<<"\n Please enter node position that has to be modified :";
		cin>>pos;
		if(pos>length)
			{
			cout<<"\n Invalid Position ! Please enter the position again..";
			modify();
			}
		else if(pos==1)
			{
			cout<<"\n Enter new data at position "<<pos<<" : ";
			cin>>start->data;
			cout<<"\n Data Modified !";
			}
			else
			   {
			   int count=1;
			   struct node *ptr;
			   for(ptr=start;ptr!=NULL;ptr=ptr->link)
				{
				count++;
				if(count==pos)
					{
					break;
					}
				}
			   temp=ptr->link;
			   cout<<"\n Enter new data at position "<<pos<<" : ";
			   cin>>temp->data;
			   cout<<"\n Data Modified !";
			   }
		}
	cout<<"\n Press any key to continue...";
	getch();
	}

void display_one()
	{
	if(length==0)
		{
		cout<<"\n No data in list !";
		}
	else
		{
		int pos;
		cout<<"\n Please enter node position that has to be displayed :";
		cin>>pos;
		if(pos>length)
			{
			cout<<"\n Invalid Position ! Please enter the position again..";
			display_one();
			}
		else if(pos==1)
			{
			cout<<"\n Data at position "<<pos<<" : "<<start->data;
			}
			else
			   {
			   int count=1;
			   struct node *ptr;
			   for(ptr=start;ptr!=NULL;ptr=ptr->link)
				{
				count++;
				if(count==pos)
					{
					break;
					}
				}
			   temp=ptr->link;
			   cout<<"\n Enter new data at position "<<pos<<" : "<<temp->data;
			   }
		}
	cout<<"\n Press any key to continue...";
	getch();
	}


void display_all()
	{
	for(temp=start;temp!=NULL;temp=temp->link)
		{
		cout<<temp->data<<"->";
		}
	cout<<"NULL";
	cout<<"\n Total length of linked list is "<<length;
	cout<<"\n Press any key to continue...";
	getch();
	}
