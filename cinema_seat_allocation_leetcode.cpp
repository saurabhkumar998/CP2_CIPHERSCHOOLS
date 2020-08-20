#include<bits/stdc++.h>
using namespace std;

int PVRManagement(int n, vector<vector<int> >& reserved){
	unordered_map<int, vector<int> >seats;

	int result=n*2;

	for(auto s:reserved){
		seats[s[0]].push_back(s[1]);
	}

	for(auto row:seats){
		bool l=false;
		bool r=false;
		bool m=false;

		for(auto s:row.second){
			if(s>1 && s<6)	l=true;
			if(s>5 && s<10)	r=true;
			if(s>3 && s<8)	m=true;
		}

		if(l==true)		result--;
		if(r==true)		result--;

		if(l==true && r==true && m==false)	result++;
	}

	return result;
}

int main(){
	int n=3;
	// [ [1,2], [1,3], [1,8], [2,6], [3,1], [3,10] ]
	
	vector<vector<int> >vec;
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	vec.push_back(arr);
	arr.clear();
	arr.push_back(1);
	arr.push_back(3);
	vec.push_back(arr);
	arr.clear();
	arr.push_back(1);
	arr.push_back(8);
	vec.push_back(arr);
	arr.clear();
	arr.push_back(2);
	arr.push_back(6);
	vec.push_back(arr);
	arr.clear();
	arr.push_back(3);
	arr.push_back(1);
	vec.push_back(arr);
	arr.clear();
	arr.push_back(3);
	arr.push_back(10);
	vec.push_back(arr);
	arr.clear();

	cout<<PVRManagement(n, vec);

	return 0;
}
