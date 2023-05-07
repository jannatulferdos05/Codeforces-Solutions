// Problem: A. Perfect Squares



#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;

bool perfectSquare(ll a){
	
	ll b=sqrt(a),c=sqrt(a);
	if(b*c==a){
		return true;
	}
	else
		return false;
}

void call(){
	int n; cin>>n;
	ll a[n];
	For(i,n)
		cin>>a[i];
	sort(a,a+n);
	
	for(int i=n-1;i>=0;i--){
		
		if(perfectSquare(a[i])==false){
			cout<<a[i]<<endl;
			return ;}
	}	
	
}
int main()
{
	call();
	return 0;
}