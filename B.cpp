// Problem: B. Mathematical Circus
// Contest: Codeforces - Codeforces Round #814 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1719/B
// Powered by CP Editor (https://cpeditor.org)
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void call(){
	int n,k; cin>>n>>k; int a1[n/2],b1[n/2],j=0;
	if(k==0){
		cout<<"NO"<<endl;
		return ;}
	for(int i=1;i<=n;i+=2)
	{
		int a=i, b=i+1,s;
		s=(a+k)*b;
		if(s%4==0){
			a1[j]=a; b1[j]=b; j++;
		}
			
		else{
		s=(b+k)*a;
			if(s%4==0){
				a1[j]=b; b1[j]=a; j++;}
			else{		
			cout<<"NO"<<endl;
			return ;}			
	}
	}
	cout<<"YES"<<endl;
	for(int i=0;i<n/2;i++)
		cout<<a1[i]<<" "<<b1[i]<<endl;

}
int main(){
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}
