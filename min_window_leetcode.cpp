#include<bits/stdc++.h>
using namespace std;

string MinWindow(string str, string pat){
	int len1 = str.length();
	int len2 = pat.length();

	if(len1<len2){
		cout<<"Not possible";
		return "";
	}

	int hash_pat[256] = {0};
	int hash_str[256] = {0};

	for(int i=0; i<len2; i++){
		hash_pat[pat[i]]++;
	}

	int start=0, startidx=-1, minlen=INT_MAX;

	int count=0;

	for(int j=0; j<len1; j++){
		hash_str[str[j]]++;

		if(hash_pat[str[j]]!=0 && hash_str[str[j]] <= hash_pat[str[j]]){
			count++;
		}

		if(count==len2){
			while(hash_str[str[start]] > hash_pat[str[start]] || hash_pat[str[start]]==0 ){
				if(hash_str[str[start]] > hash_pat[str[start]]){
					hash_str[str[start]]--;
				}

				start++;
			}

			int len_window = j-start+1;

			if(len_window < minlen){
				minlen = len_window;
				startidx = start;
			}
		}
	}

	if(startidx==-1){
		cout<<"Not Possible";
		return "";
	}

	return str.substr(startidx, minlen);
}

int main(){
	string str = "COMPUTERCAR";
	string pat = "CRT";

	string ans = MinWindow(str, pat);
	cout<<ans;

	return 0;
}
