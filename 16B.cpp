// Problem: B. Burglar and Matches
// Contest: Codeforces - Codeforces Beta Round #16 (Div. 2 Only)
// URL: https://codeforces.com/contest/16/problem/B
#include<bits/stdc++.h>
#define ll signed long long int
#define pairvectorsort sort(v.rbegin(),v.rend());
#define For(i,n) for(int i=0;i<n;i++)

using namespace std;

void call(){
		int n,m,s=0;
		cin>>n>>m; 
		vector<pair<int, int> >v;
		for(int i=0;i<m;i++){ int a,b;
			cin>>a>>b; s+=a;
			v.push_back({b,a});			
		}
		
		if(s<=n){
			ll res=0;
			
			for(int i=0;i<m;i++)
				res=res+v[i].first*v[i].second;
			
			cout<<res<<endl; return ;
		}
		
		
		sort(v.rbegin(),v.rend());
		
		ll ans=0;
		for(int i=0;i<m;i++){
						
			if(n>v[i].second){
				ans=ans+v[i].first*v[i].second;
				n=n-v[i].second;				
				}
			else if(n==v[i].second){				
				cout<<ans+v[i].first*v[i].second<<endl; return ;}
			else{
			cout<<ans+n*v[i].first<<endl; return ;}
		}
}
int main(){	
		call();
	return 0;		
}