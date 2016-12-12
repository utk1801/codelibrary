//Curtain pattern

#include<iostream.h>
#include<conio.h>

//Main Function

void main()
{
	clrscr();
	int i,j,k,l,b=0;   //Variables declared
	for(i=1;i<=5;i++)  //Loop for number of lines
	{
		for(j=5;j>=i;j--)   //Loop for first half of curtain
			cout<<"*";
		for(k=0;k<b;k++)
			cout<<" ";  //Loop for blank spaces
		b+=2;
		for(l=5;l>=i;l--)   //Loop for second half of curtain
			cout<<"*";
		cout<<endl;
	}
	getch();
}