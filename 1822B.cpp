// Problem: B. Karina and Array
// Contest: Codeforces - Codeforces Round 867 (Div. 3)
// URL: https://codeforces.com/contest/1822/problem/B
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

void call(){
	int n; cin>>n; ll a[n];
	For(i,n){
		cin>>a[i];
	}
	sort(a,a+n);
	if(a[0]*a[1]>a[n-1]*a[n-2])
		cout<<a[0]*a[1]<<endl;
	else
		cout<<a[n-1]*a[n-2]<<endl;	
}
int main()
{
	int t; cin>>t;
	while(t--)
	call();
	return 0;
} 