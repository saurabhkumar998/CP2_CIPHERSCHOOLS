#include<bits/stdc++.h>
using namespace std;

bool monotonic(vector<int> arr){
	bool non_increasing = true;
	bool non_decreasing = true;

	for(int i=1; i<arr.size(); i++){
		if(arr[i]<arr[i-1]){
			non_decreasing = false;
		}

		if(arr[i]>arr[i-1]){
			non_increasing = false;
		}
	}

	return ( non_increasing || non_decreasing );
}

int main(){
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(5);
	arr.push_back(7);

	cout<<monotonic(arr);

	return 0;
}
