// Problem: A. TubeTube Feed
// Contest: Codeforces - Codeforces Round 867 (Div. 3)


#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fo(i,a,b) for(i=a;i<=b;i++)
#define sortv sort(v.begin(),v.end())
#define max *max_element(v.begin(), v.end())
#define sortarr sort(arr, arr+n,<greater>int)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
using namespace std;

void call(){
	int n,t,flag=0,mx=0; cin>>n>>t; int a[n],b[n];
	For(i,n){
		cin>>a[i];
	if(a[i]>t) flag++;
	}
	
	For(i,n){
		cin>>b[i];
	}
	
	
	
	if(flag==n){
		cout<<-1<<endl; return ;
	}
	
	int c[n];
	
	For(i,n){
		
		if(i+a[i]<=t){
			c[i]=i+1+a[i];
			//cout<<"i+a[i]: "<<i+a[i]<<endl;
			}
		else
			c[i]=0;	
	}
	 mx=0;
	flag=0;
	
	For(i,n){
		
		if(b[i]>=mx && c[i]!=0){
			//cout<<"b: "<<b[i]<<endl;
			mx=b[i];
			flag=i+1;
		}
		
	}
	
	if(flag==0){
		cout<<-1<<endl; return ;
	}
	cout<<flag<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
	call();
	return 0;
} 