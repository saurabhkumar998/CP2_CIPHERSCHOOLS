#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int> > &arr){
	int len = arr.size();

	for(int i=0; i<len/2; i++){
		for(int j=i; j<len-i-1; j++){
			int temp = arr[i][j];

			arr[i][j] = arr[len-j-1][i];
			arr[len-j-1][i] = arr[len-i-1][len-j-1];
			arr[len-i-1][len-j-1] = arr[j][len-i-1];

			arr[j][len-i-1] = temp;
		}
	}
	
}

int main(){
	vector<vector<int> > arr;
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	arr.push_back(v);

	v.clear();
	v.push_back(3);
	v.push_back(4);
	arr.push_back(v);

	rotate(arr);

	for (int i = 0; i < arr.size(); i++)
	{
		for(int j=0; j<arr[0].size(); j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
