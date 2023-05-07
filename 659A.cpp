// Problem: A. Round House
// Contest: Codeforces - Codeforces Round #346 (Div. 2)
// URL: https://codeforces.com/contest/659/problem/A

#include<bits/stdc++.h>
using namespace std;
void call(){
	int n,a,b; cin>>n>>a>>b;	
	
	if(b>0){
		int ans=a+b%n;
		if(ans>n)
			cout<<ans-n;
		else
			cout<<ans<<endl;	
	}
	else if(b<0){
		int ans=a; b=b*-1;
		for(int i=1;i<=b;i++){
			ans--;
			if(ans==0)
				ans=n;
		}
		
		cout<<ans<<endl;		
	}
	else
		cout<<a<<endl;
				
}
int main(){

		call();
	return 0;		
}
