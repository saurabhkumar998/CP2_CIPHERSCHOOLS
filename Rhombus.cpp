#include <bits/stdc++.h> 
using namespace std; 

void solidRhombus(int rows) 
{ 
	int i, j; 
	for (i=1; i<=rows; i++) 
	{ 
		for (j=1; j<=rows - i; j++) 
			cout << " "; 	
		 
		for (j=1; j<=rows; j++) 
			cout << "*"; 
			
		cout << "\n"; 
	} 
} 

 
void hollowRhombus(int rows) 
{ 
	int i, j; 
	for (i=1; i<=rows; i++) 
	{  
		for (j=1; j<=rows - i; j++) 
			cout << " "; 
			
		if (i==1 || i==rows) 
			for (j=1; j<=rows; j++) 
				cout << "*"; 
				
		else
			for (j=1; j<=rows; j++) 
				if (j==1 || j==rows) 
					cout << "*"; 
				else
					cout << " "; 
		cout << "\n"; 
	} 
} 
 
 
int main() 
{ 
	int rows;
	cout<<"Enter the number of rows: ";
	cin>>rows;
	 
	cout<<"Solid Rhombus for "<<rows<<" Rows:"<<endl;
	cout<<endl;
	solidRhombus(rows);
	cout<<endl; 
	cout<<"Hollow Rhombus for "<<rows<<" Rows:"<<endl;
	cout<<endl;
	hollowRhombus(rows);
	return 0; 
} 

