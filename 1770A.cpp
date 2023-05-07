#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;

void call(){
	int n,m; cin>>n>>m;
	ll a[n],b[m];
	
	
	For(i,n){
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	
	if(n==1 && m==1){
		cout<<b[0]<<endl; return ;
	}
	
	
	ll s=0;
	sort(a,a+n);
	sort(b,b+m,greater<>());
	for(int i=0;i<m;i++){
		if(b[i]>=a[i]){
			s+=b[i];
		}
		else{ s+=a[i];
			break;
			}
	}
	for(int i=m;i<n;i++){
		s+=a[i];
	}
	
	cout<<s<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}