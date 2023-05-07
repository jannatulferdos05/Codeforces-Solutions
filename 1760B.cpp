// Problem: B. Atilla's Favorite Problem
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
	int n; cin>>n;
	string s; cin>>s;
	map<char,int>m;
	for(int i=0;i<n;i++){
		m.insert({s[i], 0});
	}
	char last;
	for(auto a: m){
		last=a.first;
	}
	
	int c=1;
	//cout<<last<<endl;
	for(char i= 'a'; i<last; i++){
		c++;
	}
	cout<<c<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}