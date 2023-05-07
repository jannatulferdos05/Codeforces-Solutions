// Problem: C. Advantage
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
	int n; cin>>n;
	int a[n],b[n];
	For(i,n){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n, greater<int>());
	For(i,n){
		if(b[i]==a[0]){
			b[i]=b[i]-a[1];
		}
		else{
			b[i]=b[i]-a[0];
		}
	}
	for(auto c: b)
	{
		cout<<c<<" ";
	}
	cout<<endl;
	
	
}
int main()
{
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}