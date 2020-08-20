#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
vector<string> v1;  
v1.push_back("Saurbh ");  
v1.push_back("Kumar");  
for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr)  
cout<<*itr;  
return 0;   
} 
