// Problem: A. Bear and Big Brother
// Contest: Codeforces - Codeforces Round #405 (rated, Div. 2, based on VK Cup 2017 Round 1)
// URL: https://codeforces.com/contest/791/problem/A

#include<bits/stdc++.h>
using namespace std;
void call(){
		int a,b,c=0;
		cin>>a>>b;
		while(a<=b){
			a=a*3; b=b*2; c++;
		}
		cout<<c<<endl;
}
int main(){
		call();
	return 0;		
}
