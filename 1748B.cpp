// Problem: B. Diverse Substrings
// Contest: Codeforces - Codeforces Round #833 (Div. 2)
// URL: https://codeforces.com/contest/1748/problem/B
#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;

void call(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	ll p=0;
		
	for(int i=0;i<n;i++){
		int cnti[10]={0};
		for(int j=i;j<n&&j<i+100;j++){
			cnti[s[j]-'0']++;
			int mx=0,dif=0;
			
		for(int i=0;i<=9;i++){
			int a=cnti[i];
			mx=max(mx,a);	
			if(a!=0) dif++;
		}
			if(dif<mx){
				continue;
			}
			
			p++;
		}
	}
	cout<<p<<endl;
 }
int main()
{
	int t; cin>>t; 
	while(t--)
		call();	
	return 0;
}
