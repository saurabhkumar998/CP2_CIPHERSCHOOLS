#include <iostream>
using namespace std;

void printdecrease(int num) {
	if(num<1) {
		return;
	}
	cout<<num<<endl;
	printdecrease(num-1);
}

int main()
{
	printdecrease(5);
	return 0;
}
