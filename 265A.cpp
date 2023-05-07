// Problem: A. Colorful Stones (Simplified Edition)
// Contest: Codeforces - Codeforces Round #162 (Div. 2)
// URL: https://codeforces.com/contest/265/problem/A

#include<bits/stdc++.h>
using namespace std;
void call(){
		string s1,s2;
		cin>>s1>>s2;
		int l=s2.length(),j=0,c=1;
		for(int i=0;i<l;i++){
			if(s1[j]==s2[i]){
				j++; c++;
			}
		}
		cout<<c<<endl;
}
int main(){
		call();
	return 0;		
}