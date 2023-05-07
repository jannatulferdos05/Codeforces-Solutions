// Problem: B. Following Directions
// Contest: Codeforces - Codeforces Round #849 (Div. 4)
// URL: https://codeforces.com/contest/1791/problem/B


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
	int n; cin>>n; string s;
	cin>>s; int x=0,y=0;
	For(i,n){
		if(s[i]=='U') y++;
		else if(s[i]=='D') y--;
		else if(s[i]=='R') x++;
		else if(s[i]=='L') x--;
		if(x==1 && y==1){
			yes; return ;
		}
	}
	no;
}
int main()
{
	int t; cin>>t;
	while(t--)
	call();
	return 0;
} 