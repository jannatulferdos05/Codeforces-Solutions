// Problem: A. Make it Beautiful

// URL: https://codeforces.com/contest/1783/problem/0
#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fo(i,a,b) for(i=a;i<=b;i++)
#define sortv sort(v.begin(),v.end())
#define mx *max_element(v.begin(), v.end())
#define sortarr sort(arr, arr+n,<greater>int)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
using namespace std;

void call(){ map<int,int>mp;
	int n; cin>>n; int a[n],s=0; vector<int>v;
	For(i,n){
		cin>>a[i]; s+=a[i]; //b[i]=s;
		mp[a[i]]++;
	}
	for(auto m:mp){
		v.pb(m.second);
	}
	int m=mx; int cel;
	 if(n%2==0){
	 	cel=n/2+1;
	 }
	 else{
	 	cel=n/2+2;
	 }
	//cout<<cel<<" c m "<<m<<endl;
	if(mp.size()==1 || m>=cel){
		cout<<"NO"<<endl; return ;
	}
	cout<<"YES"<<endl;
	cout<<a[0]<<" ";
	for(int i=n-1;i>=1;i--){
		cout<<a[i]<<" ";
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