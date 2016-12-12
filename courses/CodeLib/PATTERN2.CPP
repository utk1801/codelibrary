//Pattern - 2

#include<iostream.h>
#include<conio.h>

//Main Function

void main()
{
	clrscr();
	int i,j,k;  //Variable declaration
	for(i=1;i<=5;i++)    //Loop for number of lines
	{
		for(j=1;j<i;j++)   //Loop for number of blanks in the lines
		{
			cout<<" ";
		}
		for(k=5;k>=i;k--)  //Loop for number of '*' in the lines
			cout<<"*";
		cout<<endl;
	}
	getch();
}