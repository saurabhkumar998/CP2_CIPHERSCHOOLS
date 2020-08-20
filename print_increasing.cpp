#include <iostream>
using namespace std;

void printincrease(int num) {
	if(num<1) {
		return;
	}
	
	printincrease(num-1);
	cout<<num<<endl;
}

int main()
{
	printincrease(5);
	return 0;
}
