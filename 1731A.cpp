#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;

void call(){
	int n; cin>>n;
	ll a[n],s1=1; vector<ll>v;
	For(i,n){
		cin>>a[i]; s1*=a[i];
		}
	cout<<(s1+n-1)*2022<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}