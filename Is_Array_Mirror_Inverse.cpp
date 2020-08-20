#include<bits/stdc++.h> 
using namespace std; 

bool isMirrorInverse(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
	{ 

		if (arr[arr[i]] != i) 
			return false; 
	} 

	return true; 
} 

int main() 
{ 
		int arr[] = { 1, 2, 4, 6 }; 
		int n = sizeof(arr)/sizeof(arr[0]); 
		if (isMirrorInverse(arr,n)) 
			cout << "Yes"; 
		else
			cout << "No"; 
		return 0; 
} 

