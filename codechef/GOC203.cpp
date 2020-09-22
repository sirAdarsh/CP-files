#include<bits/stdc++.h>
#define ll long long
using namespace std;
//checking if ax+by=c have some solution

ll gcd(ll a,ll b){
	return a?(gcd(b%a,a)):b;
}
bool solve(ll a,ll b,ll c){
	ll g=gcd(a,b);
	return (c%g)?false:true;
}
int main(){
	int t;
	cin>>t;
	ll a,b,c;
	for(int i=1;i<=t;i++){
		cin>>a>>b>>c;
		if(solve(a,b,c)){
			cout<<"Case "<<i<<": Yes"<<endl;
		}
		else{
			cout<<"Case "<<i<<": No"<<endl;
		}
	}

}

