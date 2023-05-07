// Problem: C. Number Game
// Contest: Codeforces - Educational Codeforces Round 138 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1749/problem/C

#include<bits/stdc++.h>
#define ll long long

using namespace std;

void call(){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a, a+n);
		
		for(ll k=n;k>0;--k){
			ll point=n-1,round=0;
			ll bob=round;
			while(round<k && point>=bob){
				ll alice=0; bob=round;
				while(!alice && point>=bob){
				if(a[point]<=k+1-(round+1)){
					round++;
					alice=1;
				}
				point--;
				}
			}
			if(round ==k){
				cout<<k<<endl; return ;
			}
		}	
		cout<<0<<endl;
}
int main(){
	int t; cin>>t;
	while(t--)
		call();
	return 0;		
}

