#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void call(){
	int n; cin>>n; 
	long long pow2=1,s;
	while(pow2<=n){
			s-=pow2*2,pow2*=2;
		}	
	cout<<s<<endl;		
}
int main(){
	int t; cin>>t;
	while(t--)
		call();
	return 0;
}