// Problem: A. Flip Flop Sum
// Contest: Codeforces - Codeforces Round #848 (Div. 2)
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
	int n,s=0,f=0; cin>>n; int a[n];
	For(i,n){
		cin>>a[i]; s+=a[i];
	}
	For(i,n-1){
		if(a[i]==-1 && a[i+1]==-1){
			cout<<s+4<<endl; return ;
		}
		else if((a[i]==1 && a[i+1]==-1)||(a[i]==-1 && a[i+1]==1))
			f=1;	
	}
	if(f==1)
	{cout<<s<<endl; return ;}
	cout<<s-4<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
		call();
	return 0;
} 
