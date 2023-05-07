#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;

void call(){
	int n,s,r=0; cin>>n;
	if(n<=2){
		cout<<1<<endl; return ;}
	else if(n%2==0)	
	{ cout<<n/2<<endl;  return ;}
	cout<<n/2+1<<endl;
	
}
int main()
{
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}