// Problem: A. Hossam and Combinatorics
// Contest: Codeforces - Codeforces Round #837 (Div. 2)
// URL: https://codeforces.com/contest/1771/problem/0
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
	int n; cin>>n; ll a;
	vector<int>v;
	//map<int,int>m;
	For(i,n){
		cin>>a;
		v.pb(a);
		//m[a]++;
	}	
	ll min=*min_element(v.begin(),v.end()),mx=*max_element(v.begin(),v.end());
	
	ll mi=0,mxi=0;
	for(auto a:v){
		if(a==min)
			mi++;
		else if(mx==a)
			mxi++;	
	}
	
	
	
	if(mx==min)
	{
		ll s=max(mi,mxi);
		cout<<(s-1)*s<<endl;
	
		return ;
	}
	
	cout<<mi*mxi*2<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}