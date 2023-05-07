// Problem: B. MKnez's ConstructiveForces Task

#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;

void call(){
	int n; cin>>n;
	if(n==3){
		no; return ;
	}
	if(n%2==0){
		yes;
		For(i,n){
			if(i%2==0)
				cout<<-500<<" ";
			else
				cout<<500<<" ";	
		}
	
		cout<<endl;
	}
	else{
		yes;
		For(i,n){
			if(i%2==0)
				cout<<-1*(n/2-1)<<" ";
			else
				cout<<n/2<<" ";	
		}
		cout<<endl;
	}
	
}
int main()
{
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}
