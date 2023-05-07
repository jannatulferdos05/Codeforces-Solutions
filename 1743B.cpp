// Problem: B. Permutation Value
// Contest: Codeforces - Educational Codeforces Round 137 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1743/problem/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
void call(){
	int n; cin>>n;	
	cout<<1<<" ";
	for(int i=3; i<=n;i++)
		cout<<i<<" ";
	cout<<2<<endl;		
}
int main(){
	int t; cin>>t;
	while(t--)
		call();
	return 0;		
}