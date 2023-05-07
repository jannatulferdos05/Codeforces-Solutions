// Problem: E. Binary Inversions
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/E
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

using namespace std;

void call(){
	int n,c; cin>>n;
	int a[n];
	For(i,n){
		cin>>a[i];
	}
	if(a[0]==0){
		a[0]=1;  c=0;
		For(i,n){
			if(a[i]==1){
				for(int j=i+1;j<n;j++){
					if(a[j]==0)
						c++;
				}
			}
		}
	}
	else{
		c=0;
		For(i,n){
			if(a[i]==1){
				for(int j=i+1;j<n;j++){
					if(a[j]==0)
						c++;
				}
			}
		}
	}
	if(a[n-1]==1){
		a[n-1]=0;
		For(i,n){
			if(a[i]==1)
				c++;
		}
	}
	else if(a[n-2]==1 && a[n-3]==1){
		a[n-2]=0;
		For(i,n){
			if(a[i]==1)
				c++;
			if(i!=n-2 && a[i]==0)
				c--;	
		}
	}
	cout<<c<<endl;
}
int main(){
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}