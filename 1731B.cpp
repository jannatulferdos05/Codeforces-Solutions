// Problem: B. Kill Demodogs

#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


using namespace std;

void call(){ ll mod=1e9+7;
	ll n; cin>>n; ll s=n*(n+1)%mod*(4*n-1)%mod;
	s*=337;
	
	cout<<s%mod<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}