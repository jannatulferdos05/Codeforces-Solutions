// Problem: A. Duff and Meat

#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;

void call(){
	int n; cin>>n;
	int a,p; ll s=0; vector<pair<int,int>>v;
	For(i,n){ 
		cin>>a>>p; s+=a; v.pb(make_pair(a,p));
	}
	
	
	if(v[0].second==1){
		cout<<s<<endl; return ;
	}
	
	ll r=0,min=v[0].second;
	For(i,n){
		if(v[i].second<min)
			min=v[i].second;
		r+=min*v[i].first;
	}
	cout<<r<<endl;
}
int main()
{
	call();
	return 0;
}