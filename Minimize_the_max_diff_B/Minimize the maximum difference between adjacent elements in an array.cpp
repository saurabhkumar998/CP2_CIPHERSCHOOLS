// C++ program to find the  minimum of the maximum difference  of the adjacent elements after removing K elements from the array 

#include <bits/stdc++.h> 

using namespace std; 

int minimumAdjacentDifference(int a[], 
						int n, int k) 
{ 
	int minDiff = INT_MAX; 
 
	for (int i = 0; i < (1 << n); i++) { 
		
		int cnt = __builtin_popcount(i); 

		if (cnt == n - k) { 
			 
			vector<int> temp; 
			for (int j = 0; j < n; j++) { 
				if ((i & (1 << j)) != 0) 
					temp.push_back(a[j]); 
			} 
	 
			int maxDiff = INT_MIN; 
			for (int j = 0; j < temp.size() - 1; j++) { 
				maxDiff = max(maxDiff, 
				temp[j + 1] - temp[j]); 
			} 
			minDiff = min(minDiff, maxDiff); 
		} 
	} 
	return minDiff; 
} 

int main() 
{ 
	int n = 5; 
	int k = 2; 

	int a[n] = { 3, 7, 8, 10, 14 }; 

	cout << minimumAdjacentDifference(a, n, k); 
	return 0; 
} 
