// Problem: A. Cowardly Rooks
// Contest: Codeforces - Educational Codeforces Round 138 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1749/problem/0
#include<bits/stdc++.h>
using namespace std;
void call(){
		int n,m;
		cin>>n>>m;
		int x[m],y[m];
		for(int i=0;i<m;i++){
			cin>>x[i]>>y[i];
		}
		if(n!=1 && m==1){
			cout<<"YES"<<endl; return ;}
		if(n==m){
			cout<<"NO"<<endl; return ;
		}	
		else if(m<n)
			cout<<"YES"<<endl;
}
int main(){
	int t; cin>>t;
	while(t--)
		call();
	return 0;		
}


