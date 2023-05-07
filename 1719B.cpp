#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void call(){
	int n,k,c=2; cin>>n>>k; 
	if(k==0){
		cout<<"NO"<<endl;
		return ;}
	for(int i=1;i<=n;i+=2)
	{
		int a=i, b=i+1,s;
		s=(a+k)*b;
		if(s%4==0)
			c=0;
		else{
			cout<<"NO"<<endl;
			return ;}			
	}
	cout<<"YES"<<endl;
	for(int i=1;i<=n;i+=2)
		cout<<i<<" "<<i+1<<endl;
}
int main(){
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}