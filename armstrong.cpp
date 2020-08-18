#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n , i, temp, rem, result = 0, count = 0, power;
	
	cout << "Enter an integer to check Armstrong: ";
	cin>> n ; 
	
	temp = n ;
	while(temp!=0){
		temp = temp/10;
		count += 1;
	}
	
	temp = n;
	
	while(temp!=0){
		rem = temp%10;
		
		power = round(pow(rem, count));
		result = result + power;
		temp = temp/10;	
	}
	if(result == n){
		cout<<"The number is Armstrong Number.";
	}
	else{
		cout<<"The number is not Armstrong Number.";
	}
	
	
	
	
	return 0;
	
}
