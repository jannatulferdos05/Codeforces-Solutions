// Problem: B. Borze
// Contest: Codeforces - Codeforces Beta Round #32 (Div. 2, Codeforces format)
// URL: https://codeforces.com/problemset/problem/32/B
#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;

void call(){
	string s; cin>>s;
	int n=s.length(),j=0;
	for(int i=0; i<n; ){
		if(s[i]=='-' && s[i+1]=='-'){
			 cout<<2;
			i=i+2;// n=n-1;
		}
		else if(s[i]=='-' && s[i+1]=='.'){
			cout<<1;
			i+=2; //n=n-1;
		}
		else if(s[i]=='.'){
			cout<<0; i++;
		}
	}
	cout<<endl;
}
int main()
{
	call();
	return 0;
}