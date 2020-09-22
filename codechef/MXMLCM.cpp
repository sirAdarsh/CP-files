#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
	
}
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}
int main(){
	int t;
	cin>>t;while(t--){
		int n,m;
	cin>>n>>m;
	int g;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int l=1;
	for(int i=0;i<n;i++){
		l=lcm(l,arr[i]);
	}
	
	int ans=1;
	int lt=1;
	int temp=l;
	for(int i=1;i<=m;i++){
		lt=lcm(l,i);
		if(lt>temp){
			ans=i;
			temp=lt;
		}
	}
	cout<<ans<<endl;
	}
	
}
