#include<bits/stdc++.h>
using namespace std;

int elimination(vector<int> &arr){
	int n = arr.size();

	if(n<2)	return n;

	int id=1;

	for(int i=1; i<n; i++){
		if(arr[i]!=arr[i-1]){
			arr[id] = arr[i];
			id++;
		}
	}

	return id;
}

int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(1);
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(2);
	arr.push_back(5);
	arr.push_back(5);

	int ans = elimination(arr);

	for(int i=0; i<ans; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<ans<<endl;

	return 0;
}
