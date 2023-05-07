// Problem: A1. Gardener and the Capybaras (easy version)
// #843 (Div. 2)
// URL: https://codeforces.com/contest/1775/problem/A1

#include<bits/stdc++.h>
#define For(i,n) for(int i=1;i<n;i++)
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
	string s;
	cin>>s; int n=s.length();
	for(int i=1;i<n;i++){
		for(int j=i+1; j<n;j++){
			string a,b,c;
			for(int k=0;k<i;k++)
				a+=s[k];
			for(int k=i;k<j;k++)
				b+=s[k];
			for(int k=j;k<n;k++)
				c+=s[k];
			if((b>=a && b>=c )|| (b<=a && b<=c)){
				cout<<a<<" "<<b<<" "<<c<<endl; return ;
			}			
		}
	}
	
}
int main()
{
	int t; cin>>t;
	while(t--)
	call();
	return 0;
} 