//Min Swaps to bring elements less than or equal to K together

#include <iostream> 
using namespace std; 
 
int minSwap(int *arr, int n, int k) {  
	int count = 0; 
	for (int i = 0; i < n; ++i) 
		if (arr[i] <= k) 
			++count; 
      
	int bad = 0; 
	for (int i = 0; i < count; ++i) 
		if (arr[i] > k) 
			++bad; 
	 
	int ans = bad; 
	for (int i = 0, j = count; j < n; ++i, ++j) { 
		
		if (arr[i] > k) 
			--bad; 
		 
		if (arr[j] > k) 
			++bad; 
		 
		ans = min(ans, bad); 
	} 
	return ans; 
} 

int main() { 
	
	int arr[] = {5, 2, 5, 8, 3}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int k = 3; 
	cout << minSwap(arr, n, k) << "\n"; 
	
	int arr1[] = {1, 2, 4, 9, 8, 6, 7}; 
	n = sizeof(arr1) / sizeof(arr1[0]); 
	k = 5; 
	cout << minSwap(arr1, n, k); 
	return 0; 
} 
