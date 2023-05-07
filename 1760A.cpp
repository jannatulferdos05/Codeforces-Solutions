// Problem: A. Medium Number
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/0?f0a28=1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;

void call(){
	int a,b,c; cin>>a>>b>>c;
	vector<int>v;
	v.pb(a); v.pb(b); v.pb(c);	
	sort(v.begin(),v.end());
	cout<<v[1]<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}