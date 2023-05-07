// Problem: E. Negatives and Positives
// Contest: Codeforces - Codeforces Round #849 (Div. 4)
// URL: https://codeforces.com/contest/1791/problem/E
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
	int n; cin>>n; int a[n]; ll s=0;
	For(i,n){
		cin>>a[i]; //s+=a[i];
	}
	for(int i=0;i<n-1;i++){
		int c=abs(a[i]),d=abs(a[i+1]);
		
		if((a[i]<0 && a[i+1]<0) || (a[i]<0 && a[i+1]==0) ||(a[i]==0 && a[i+1]<0)){
			s+=c;
			//a[i]=c;
			a[i+1]=d;
		}
		else if((c>d && a[i]<a[i+1] )|| c==d){
			s+=c;
			//a[i]=c;
			a[i+1]=d*(-1);
		}
		else if(c<d && a[i]>a[i+1]){
			s+=c*(-1);
			a[i+1]=d;
		}
		else s+=a[i];
	}
	
	s+=a[n-1];
	cout<<s<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
	call();
	return 0;
} 