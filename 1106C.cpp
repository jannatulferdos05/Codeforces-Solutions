// Problem: C. Lunar New Year and Number Division
#include<bits/stdc++.h>
#define For(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;

void call(){
	int n; cin>>n; int a[n];
	For(i,n)
		cin>>a[i];
	sort(a, a+n); ll s=0; int t=n-1;
	for(int i=0;i<n/2;i++){
		s+=pow((a[i]+a[t]),2);
		t--;
	}
	cout<<s<<endl;	
}
int main()
{
	call();
	return 0;
}
