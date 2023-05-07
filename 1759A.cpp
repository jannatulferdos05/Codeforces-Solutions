#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;

void call(){
	int n; string s; cin>>s;
	n=s.length();
	for(int i=0; i<n-1;i++){
if((s[i]=='e'&&s[i+1]=='s')||(s[i]=='Y'&&s[i+1]=='e')||(s[i]=='s'&&s[i+1]=='Y')){
		 cout<<"YES "<<s[i]<<endl; return ;
		 }
	}
	if(guess(4)==1){
		cout<<"JU"<<endl;
	}
	cout<<"NO"<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}