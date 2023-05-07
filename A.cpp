// Problem: A. Password
// Contest: Codeforces - Educational Codeforces Round 137 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1743/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
void call(){
	int n; cin>>n; int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int c=10-n-1,s=0;
	for(int i=c;i>=1;i--)	
		s+=(i*6);
	cout<<s<<endl;	
}
int main(){
	int t; cin>>t;
	while(t--)
		call();
	return 0;		
}